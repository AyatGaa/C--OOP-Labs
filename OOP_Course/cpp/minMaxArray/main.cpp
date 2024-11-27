#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int mini = INT_MAX;
    int maxi = INT_MIN;
    /* or
    int mini = arr[0];
    int maxi = arr[0]; // as init value
    */
    cout<<"Enter 5 Numbers: \n";
    //input
    for(int i = 0; i< 5 ; i++){
        cin>>arr[i];
    }

    //processing
      for(int i = 0; i< 5 ; i++){
        if(arr[i] > maxi)
            maxi = arr[i];

        if(arr[i] < mini)
            mini = arr[i];
    }

    //output
    cout<<"Min Element: "<<mini<<endl;
    cout<<"Max Element: "<<maxi<<endl;

    return 0;
}
