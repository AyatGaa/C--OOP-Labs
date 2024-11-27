#include <iostream>
#include <conio.h>

float z;
using namespace std;
int main()
{
    char str2[] ={"ayat"};
   char str[]={'a','y','a','t','3'};

    int i=0 ;
    while(str[i] != 0){

        cout<<str[i];
       // cout<<i<<endl;
        i++;
    }
    cout<<endl;
    cout<<str2<<endl;
   cout<<'\n'<<(int)str[i+1];

     return 0;
}
