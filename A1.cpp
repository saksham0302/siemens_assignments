#include <iostream>
#include <stdio.h>

using namespace std;

int removeAndShift(char *socks, int nos) {
    //used to temporarily store an element
    char temp;

    //k is used to get the initial index from where the shifting needs to be done
    int k=0;

    for (int i=0; i<nos; i++) {

        //checks whether there exists an pair of element
        if (socks[i] == socks[i+1])
            i++;

        //if pair does not exist this helps in right shifting the element to get the element with no pair in beginning
        else if (socks[i] != socks[i+1]) {
            temp = socks[i];
            int a=i;
            int b=i-1;
            while (a>=k && b>=k) {
                socks[a] = socks[b];
                a--;
                b--;
            }
            socks[a] = temp;
            k++;
        }
    }
    //returns the end value of array till where the non-pair element exists
    return k;
}

void printList(char *socks, int nos){
    cout<<"|";
    for (int i=0; i<nos; i++)
        cout<<socks[i]<<"|";
    cout<<endl;
}

int main() {
    //nos = no of socks
    int nos;
    cin>>nos;
    char socks[nos];

    //used to temporarily store an element
    char temp;

    //accept elements into array
    for (int i=0; i<nos; i++)
        cin>>socks[i];

    //sorting the element in array in descending order
    //i and j used as indexes of array
    for (int i=0; i<nos; i++) {
        for (int j=i+1; j<nos; j++) {
            if (socks[i]<socks[j]) {
                temp = socks[i];
                socks[i] = socks[j];
                socks[j] = temp;
            }
        }
    }

    //used to print the array
    printList(socks, nos);

    //used to shift the pair of elements at end
    nos = removeAndShift(socks, nos);
    printList(socks, nos);
    return 0;
}
