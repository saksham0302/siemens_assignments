#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string word;
    int len = 0;
    cin>>word;

    //get the length of word
    len = word.length();
    cout<<endl;

    if (len > 10)
        cout<<word[0]<<len-2<<word[len-1];
    else
        cout<<word;

    return 0;
}
