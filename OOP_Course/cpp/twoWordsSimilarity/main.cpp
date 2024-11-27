#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char word1[5] = "ayat";
    char word2[6] = "gamal";
    int res;

    //input
    cout<<"Enter First Word: ";
    cin>>word1;

    cout<<"Enter Second Word: ";
    cin>>word2;

    //processing
    res = strcmp(word1, word2);

    //output
    if(res > 0)// posative
    {
        cout<<"Word 1 > Word 2\n";

    }else if(res < 0) // negative
    {
        cout<<"word 1 < word 2\n";

    }else //equal
    {
        cout<<"Two words are the Same \n";
    }

    return 0;
}
