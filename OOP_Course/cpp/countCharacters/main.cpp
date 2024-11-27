#include <iostream>

using namespace std;

int main()
{
    char word[7];

    cout<<"Enter Word: ";
    cin>>word;

    int i = 0;
    while(word[i] != 0){
        i++;
    }
    cout<<"Number Of Characters = "<<i<<endl;
    return 0;
}
