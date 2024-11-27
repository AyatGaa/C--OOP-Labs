#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;


/*
// 72 up
// 80 down
// 71 home
// 79 end
// 27 esc
// 13 enter
// right 77
// left 75
*/

// col, row
COORD coord ={0,0};
void gotoxy(int y, int x){
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
    int strSize;
    cout<<"Enter String Size: \n";
    cin>>strSize;
    char *ptrSize, *ptr;
    ptrSize = new char[strSize]; // arr of char of size
    int row =1, col =0;
    char ch;
    ptr = ptrSize ; //// focusss
    gotoxy(row,col);
    int flag =1;

    if(ptrSize){


            gotoxy(col=2, row=0);
            cout<<"Enter string\n";


        do{
            col=3;
            ch = getch();
            if(ch == -32) // extended key (home , end , right , left)
            {
                ch = getch();
                if(ch == 71){ //home
                    row =0; col =3;
                    ptr = ptrSize; // go to home
                    gotoxy(col, row);
                }
                if(ch == 79){ //end

                        ptr= (ptr+(strSize -1)); // make ptr jump to last element
                        row= strSize;
                        gotoxy(col, row);

                }

              if(ch == 77) { // right
                     if(row<strSize){
                        ptr++;  row++;
                        gotoxy(col, row);
                    }
                }
                if(ch == 75) { // left
                    if(row >0 ){
                        ptr--;  --row;
                        gotoxy(col, row);
                    }
                }
            }
           else if( isprint(ch)){
                    if(row < strSize){
                    *ptr = ch;
                    gotoxy(col=3, row);
                    cout<<*ptr;
                    row++;
                    ptr++;
                    }
            }

            else{
                 gotoxy(15,10);
                for(int i = 0 ; i<strSize ; i++){ // print string
                  cout<<*(ptrSize+i);
                }
                flag =0;
            }


        } while(flag);

        delete(ptrSize); //DO NOT FORGET TO DELETE WHAT U ALLOCATED BEFORE !
    }
    return 0;
}
