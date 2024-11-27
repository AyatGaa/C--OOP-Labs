#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char fName[6] ;
    char lName[7] ;

    char fullName[14];

    cout<<"Enter your First Name : "<<endl;
    cin>>fName;

    cout<<"Enter your Last Name : "<<endl;
    cin>>lName;

    strcat(fullName, fName);
    strcat(fullName, lName);

    cout<< "Your Full name is :"<<fullName;
    return 0;
}
