#include <iostream>

using namespace std;

int main()
{
  int num;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int trial = 5;
    while(trial--){

    cout<<"Please Enter the " << trial+1 <<" Number \n";

        cin>>num;
        if(num > maxi)
            maxi= num;

        if(num < mini)
            mini = num;
    }

cout<<"Max Number :"<<maxi<<endl;
cout<<"Min Number :"<<mini<<endl;
    return 0;
}
