#include <iostream>
#include <windows.h>
#include <conio.h>
void sum(int x, int y);
float divide(int x, int y);
void multiply(int x, int y);
void subtract(int x, int y);
void power(int x, int y);

COORD coord={0,0};
void gotoxy(int y, int x){
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

using namespace std;

int main()
{
// 72 up
// 80 down
// 71 home
// 79 end
// 27 esc
// 13 enter
int row =1; int col =1;
    int pos = 7;
    char ch;
    int choice;
    int x,y;
     cout<<"Choose From Menu\n";
        cout<<"1- Sum \n";
        cout<<"2- Divide \n";
        cout<<"3- Multiply \n";
        cout<<"4- Subtract \n";
        cout<<"5- Power \n";
        cout<<"6- Exit \n";
        gotoxy(row,col);
    do{

        ch = getch();
    if(ch == -32){
        ch = getch();
        if(ch == 80 ){ // down
            row++;
            gotoxy(row,col);
            }
        if(ch == 72){ //up
        row--;
        gotoxy(row,col);
        }
        if(ch == 71){ //home
            row=1;
            gotoxy(row,col);
        }
        if(ch == 79){//end
            row=6;
            gotoxy(row,col);
        }

        if(row >6) {
                row =1;
                gotoxy(row,col);
        }

        }else
        {

        switch(row){
            case 1:gotoxy(row*pos,col);
                cout<<"Enter 2 numbers to sum  :\n";
                    cin>>x;
                    cin>>y;
                    sum(x,y);
                    gotoxy(row,col);
            break;
            case 2:gotoxy(row*pos,col);
                    cout<<"Enter 2 numbers to Divide  :\n";
                    cin>>x;
                    cin>>y;
                    cout<< divide(x,y)<<endl;
                     gotoxy(row,col);
            break;
            case 3: gotoxy(row*pos,col);
                    cout<<"Enter 2 numbers to Multiply  :\n";
                    cin>>x;
                    cin>>y;
                    multiply(x,y);
                     gotoxy(row,col);
            break;
            case 4: gotoxy(row*pos,col);
                    cout<<"Enter 2 numbers to Subtract  :\n";
                    cin>>x;
                    cin>>y;
                    subtract(x,y);
                     gotoxy(row,col);
            break;
               case 5: gotoxy(row*pos,col);
                cout<<"Enter base and power  :\n";
                    cin>>x;
                    cin>>y;
                    power(x,y);
                     gotoxy(row,col);
            break;
            case 6: gotoxy(row*pos,col);
                cout<<"Exit Program:\n";
                break;
            }
             if(row == 6){
            break;}
        }

    }while(row != 6 || ch != 27);

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
