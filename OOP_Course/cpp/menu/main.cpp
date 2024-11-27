#include <iostream>

using namespace std;

int main()
{

    int choice;
    cout<<"Choose From Menu\n";
    cout<<" 1- File \t 2- Edit \n";
    cout<<" 3- Save \t 4- Exit \n";

    while(cin>>choice){

        switch(choice){
            case 1: cout<< "File is pressed\n";
            break;
            case 2: cout<< "Edit is pressed\n";
            break;
            case 3: cout<< "Save is pressed\n";
            break;
            case 4: cout<< "Exit is pressed\n";
            break;
        }
        if(choice == 4) break;
    }
        return 0;
}
