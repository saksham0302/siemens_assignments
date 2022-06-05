#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    //Move used to count the swaps required
    int matrix[5][5], row=0, column=0, Move=0;

    //r and c are used to store the index value of 1 in matrix
    int r, c;

    for (row=0; row<5; row++) {
        for (column=0; column<5; column++) {

            //accept the values in matrix
            cin>>matrix[row][column];

            //get the position of 1 in matrix
            if (matrix[row][column] == 1) {
                r=row;
                c=column;
            }
        }
    }

    //temp is used as a temporary variable to store the values while swapping
    int temp, k;
    //k is as an arbitrary value to determine the index of swapping row or column

    //works on swapping rows
    if (r != 2) {
        while (r != 2) {
            (r<2) ? k=1 : k=-1;

            //swapping
            for (column=0; column<5; column++) {
                temp = matrix[r][column];
                matrix[r][column] = matrix[r+k][column];
                matrix[r+k][column] = temp;
            }
            (r>2) ? r-- : r++;
            Move++;
        }
    }

    //works on swapping columns
    if (c != 2) {
        while (c != 2) {
            (c<2) ? k=1 : k=-1;

            //swapping
            for (row=0; row<5; row++) {
                temp = matrix[row][c];
                matrix[row][c] = matrix[row][c+k];
                matrix[row][c+k] = temp;
            }
            (c>2) ? c-- : c++;
            Move++;
        }
    }

    cout<<Move<<endl;

    //display updated matrix
    for (row=0; row<5; row++) {
        for (column=0; column<5; column++) {
            cout<<matrix[row][column]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
