#include <iostream>

using namespace std;

int main()
{
    int std_sub[3][4];
    int sum =0;
    float avg = 0;

    //input
      for(int row = 0; row < 3 ; row ++){
            cout<<"Enter Grades of Student " <<row+1<<endl;
        for(int col = 0 ; col < 4 ; col++){
            cin>>std_sub[row][col];
        }
    }

    // summation of each student
    cout<<"Sum of Subjects\n";
    for(int row = 0; row < 3 ; row ++){
        for(int col = 0 ; col < 4 ; col++){
            sum+= std_sub[row][col];
        }
        cout<<"Student "<< row+1 <<" Total Grades: "<<sum<<endl;
        sum =0;
    }

    // average of each subject
      cout<<"\n Average of subjects\n";
      for(int col = 0; col < 4; col ++){
        for(int row = 0 ; row < 3 ; row++){
            sum+= std_sub[row][col];
        }
        avg = (float)sum / 3;
        cout<<"Subject "<< col+1 << " Average: "<<avg<<endl;
        sum = 0;
        avg = 0;
    }
    return 0;
}
