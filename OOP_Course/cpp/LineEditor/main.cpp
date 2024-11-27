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
    char text[10] = {};
    char *ptr; char *ptr2;
    ptr = text;
    ptr2= text;
    int row =0, col =0;
    char ch;
    gotoxy(row,col);

    do{
    ch = getch();
        if(ch == -32) // extended key (home , end , right , left)
        {
            ch = getch();
            if(ch == 71){ //home
                row =0, col =0;
                ptr2 = ptr; // go to home
                gotoxy(col, row);
            }
            if(ch == 79){ //end

                    ptr2= &text[strlen(text)];
                    row= strlen(text);
                    gotoxy(col, row);

            }

          if(ch == 77) { // right
                 if(row<sizeof(text) && *ptr == '\0'){
                    ptr2++;  row++;
                    gotoxy(col, row);
                }
            }
            if(ch == 75) { // left
                if(row >0 ){
                    ptr2--;  --row;
                    gotoxy(col, row);
                }
            }
        }
       else if( isprint(ch)){
                if(row<sizeof(text)-1){
                *ptr2 = ch;
                cout<<ch;
                ptr2++;
                row++;
                gotoxy(col, row);
                }
        }
        else // enter
        {
            gotoxy(15,10);
            cout<<text<<endl;
        }

    } while(ch != 27  || ch==13);

    return 0;
}
