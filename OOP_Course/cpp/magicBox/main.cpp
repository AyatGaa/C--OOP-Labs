#include <iostream>

using namespace std;

int main()
{
    int s;
    cout<<"Enter Size \n";

    while(cin>>s){

        if(s % 2 == 0 ){
            if(s == 0) break;
            cout<<"Enter Odd Size \n";
            continue;
        }

        int row =1;
        int col = (s+1)/2;
        int num =1;
        cout<<"Num: "<<num<<" row= "<<row<<" col= "<<col<<endl;

        for(int i =2 ; i<= s*s ; i++){
            num =i;

            if((num -1) %s != 0){
                   row --;
                if(row <1) row = s;

                   col--;
                if(col <1) col =s;
            }

            if((num-1) %  s == 0){
                    row ++;
                if(row>s) row =1;
            }


        cout<<"Num: "<<num<<"  row= "<<row<<"  col= "<<col<<endl;
        }

    cout<<"Enter Size, For Exit Enter 0 \n";

    }

    return 0;
}
