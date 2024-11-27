#include <iostream>

void sum(int x, int y);
float divide(int x, int y);
void multiply(int x, int y);
void subtract(int x, int y);
void power(int x, int y);

using namespace std;

int main()
{

    int choice;
    int x,y;
    do{
        cout<<"Choose From Menu\n";
        cout<<" 1- Sum \t 2- Divide \n";
        cout<<" 3- Multiply \t 4- Subtract \n";
        cout<<" 5- Power \t 6- Exit \n";

        cin>>choice;

        switch(choice){
            case 1: cout<<"Enter 2 numbers to sum  :\n";
                    cin>>x;
                    cin>>y;
                    sum(x,y);
            break;
            case 2: cout<<"Enter 2 numbers to Divide  :\n";
                    cin>>x;
                    cin>>y;
                    cout<< divide(x,y)<<endl;
            break;
            case 3: cout<<"Enter 2 numbers to Multiply  :\n";
                    cin>>x;
                    cin>>y;
                    multiply(x,y);

            break;
            case 4: cout<<"Enter 2 numbers to Subtract  :\n";
                    cin>>x;
                    cin>>y;
                    subtract(x,y);
            break;
               case 5: cout<<"Enter base and power  :\n";
                    cin>>x;
                    cin>>y;
                    power(x,y);
            break;

        }
    }while(choice != 6);

    return 0;
}

void sum(int x, int y){
    cout<<x<<" + "<<y<<" = "<< x+y<<endl;
}
float divide(int x, int y){
    if(y == 0){ cout<< "Can Not Divide by ZERO!!\n";}
    else return (float)x/(float)y;
}
void multiply(int x, int y){
    cout<<x<<" * "<<y<<" = "<< x*y<<endl;
}

void subtract(int x, int y){
    cout<<x<<" - "<<y<<" = "<< x-y<<endl;
}

void power(int x, int y){

    int result =1;
    for(int i=1 ; i<=y; i++){
        result *= x;
    }
    cout<<x<<" ^ "<<y<<" = "<< result<<endl;
}
