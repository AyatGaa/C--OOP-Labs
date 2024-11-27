#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char word[6];
    char revWord[7];
    //input
    cout<<"Enter Word To Reverse: ";
    cin>> word;

    //processing
    int i =0;
    while(word[i] != 0){
        i++;
        if(word[i+1] == 0)
        {
            for(int j = 0; j<6; j++){
                revWord[j] = word[i];
              //  strcpy(revWord[j] , word[i])
                i--;
            }
        }
    }
    //output
    cout<<"Reversed Word : "<<revWord;
    return 0;
}
