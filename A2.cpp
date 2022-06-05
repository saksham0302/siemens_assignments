#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <cstring>

using namespace std;

//used to generate the random list of orders
void generateList(string *order, int *arr, int n) {


    string color[] = {"G", "Y"};
    //contains the color and material of wool
    string wool[] = {"A","W"};

    int length;
    //length of cloth
    string len;

    srand(time(0));
    for (int i=0; i<n; i++)
    {
        length  = rand() % 48 + 24;
        //storing the values of length in an int array to compare the lengths for sorting purpose
        arr[i] = length;

        //converting integer length to string length to store in string array
        len = to_string(length);

        //concatenates all the string in Order array
        order[i] = color[rand() % 2] + len + wool[rand() % 2];
    }
};

//used to find the maximum length of cloth in string array
int findNext(int *arr, int k, int n) {

    int Max = 0;
    int index=0;
    for (int i=k; i<n; i++) {
        if (arr[i] >= Max) {
            Max = arr[i];
            index = i;
        }
    }
    return index;
};

//used to sort the string array in descending order
void putInOrder(int *arr, string *order, int index, int k) {
    string temp;
    int temp1 = 0;
    temp = order[k];
    order[k] = order[index];
    order[index] = temp;
    temp1 = arr[k];
    arr[k] = arr[index];
    arr[index] = temp1;
}

//used to print the original and updated list
void printList(string *order, int no) {
    cout<<"|";
    for (int j=0; j<no; j++)
        cout<<order[j]<<"|";
    cout<<endl;
}

int main()
{
    int no;
    //no of order
    cin>>no;
    string order[no];
    int arr[no];

    generateList(order, arr, no);
    printList(order, no);

    //k is a variable used to update the starting index of string array after searching for max value in array and later sorting it in descending order
    int k=0;

    //index receives the position at which max element is located
    int index;
    while (k < no){
        index = findNext(arr, k, no);
        putInOrder(arr, order, index, k);
        k++;
        index = 0;
    }

    cout<<endl;
    printList(order, no);
    return 0;
}
