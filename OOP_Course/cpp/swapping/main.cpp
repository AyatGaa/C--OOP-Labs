#include <iostream>

using namespace std;


void swapByValue(int x, int y);

void swapByAddress(int *x, int *y);
int main()
{
    int a ,b;

    cout<<"Enter A \n";
    cin>>a;
    cout<<"Enter B \n";
    cin>>b;

    cout<<"Swap By Value \n";
    swapByValue(a,b);
    cout<<"A : "<<a <<" B: "<<b<<endl;
cout<<"==========================\n";
 cout<<"Enter A \n";
    cin>>a;
    cout<<"Enter B \n";
    cin>>b;

    cout<<"Swap By Value \n";
    swapByAddress(&a,&b);
    cout<<"A : "<<a <<" B: "<<b<<endl;
    return 0;
}

void swapByValue(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;

}


void swapByAddress(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
