#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3,num4,num5;
    int mini = INT_MAX;
    int maxi = INT_MIN;

    cout<<"Please Enter 5 Numbers \n";
    cin>> num1>>num2>>num3>>num4>>num5;

    if(num1> maxi)
    {
        maxi = num1;
    }

    if(num2> maxi)
    {
        maxi = num2;

    }
    if(num3> maxi)
    {
        maxi = num3;
    }
    if(num4> maxi)
    {
        maxi = num4;
    }
    if(num5> maxi)
    {
        maxi = num5;
    }

    if(num1<mini) mini = num1;
    if(num2<mini) mini = num2;
    if(num3<mini) mini = num3;
    if(num4<mini) mini = num4;
    if(num5<mini) mini = num5;


cout<<"Max Number :"<<maxi<<endl;
cout<<"Min Number :"<<mini<<endl;

    return 0;
}
