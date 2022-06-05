#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

void createLadder(string *Ladder, int Ladder_Size) {
    cout<<"Ladder: [";

    //assigns + and - to ladder
    for (int i=0; i<Ladder_Size; i++) {
        if (i%2 == 1)
            Ladder[i] = "+";
        else
            Ladder[i] = "-";
        cout<<"'"<<Ladder[i]<<"' ,";
    }
    cout<<"]\n"<<endl;
}

void playGame(string *Ladder, string *ogreNames, int *ogreRungs) {

    //Final is used to check the rung when it reaches position 19
    int Final=0;
    int dice=0;

    //will stores the position of rung after dice is rolled
    int current_pos=0;
    srand(time(0));

    //to check whether ogre reaches the final position
    while (Final < 19) {
        for (int i=0; i<4; i++) {

            dice = 0;
            //get a random number from 1 to 4
            dice = rand() % 4 + 1;
            current_pos = ogreRungs[i] + dice;

            //to check for "+" in ladder and rung position greater than 19
            if (Ladder[current_pos] == "+" || current_pos > 19) {
                ogreRungs[i] = current_pos;
                if (ogreRungs[i] > 19)
                    ogreRungs[i] = 19;
                cout<<"With hop distance="<<dice<<", "<<ogreNames[i]<<" hops up to rung "<<ogreRungs[i]<<"."<<endl;
            }

            //to check for "-" in ladder
            else if (Ladder[current_pos] == "-") {
                ogreRungs[i] = ogreRungs[i] - 1;
                if (ogreRungs[i] < 0)
                    ogreRungs[i] = 0;
                cout<<"With hop distance="<<dice<<", "<<ogreNames[i]<<" slides back to rung "<<ogreRungs[i]<<"."<<endl;
            }

            Final = ogreRungs[i];
            if (Final >= 19)
                break;
        }
        cout<<endl;
    }
}

int main() {
    int Ladder_Size = 20;
    string Ladder[20];
    string ogreNames[] = {"Glork", "Zagbror", "Wozar", "Recinah"};
    int ogreRungs[] = {0, 0, 0, 0};

    createLadder(Ladder, Ladder_Size);

    playGame(Ladder, ogreNames, ogreRungs);

    cout<<endl;
    //k is used to store the index of winner from array
    int k;
    for (int j=0; j<4; j++) {
        cout<<ogreNames[j]<<" was at position "<<ogreRungs[j]<<endl;
        if (ogreRungs[j] == 19)
            k = j;
    }
    cout<<endl<<ogreNames[k]<<" is the winner of this game."<<endl;
    return 0;
}
