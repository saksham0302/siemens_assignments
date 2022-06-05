#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n=0, sum=0, i=0, pid[7]; //n = number_of_pages, pid = pages_in_a_day
    cin>>n;

    for (i=0; i<7; i++)
        cin>>pid[i];
    i=0;

    while (sum < n) {
        sum = pid[i] + sum;      //sum = total no. of pages he read at the end of each day
        if (sum >= n) {
            cout<<i+1;
        }
        i++;
        if (i==7)
            i=0;
    }
    return 0;
}
