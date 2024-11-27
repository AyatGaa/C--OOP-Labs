#include <iostream>

using namespace std;

struct student{
    int id;
    char name[20];
    int grades[3];
};

student fillStd();
void printStd(student s);

int main()
{
    //student s;
    student s2[3];
    //input
    for(int i = 0; i<3 ; i++){
        cout<<"Enter "<< i+1<<" Student Data"<<endl;
        s2[i] =fillStd();
    }
    //output
       for(int i = 0; i<3 ; i++){
        cout<<" Student " << i+1<< "Data "<<endl;
       printStd(s2[i]);
    }

    //s = fillStd();
    //printStd(s);
    return 0;
}

student fillStd(){
    student s;
    cout<<"Enter Student Id : \n";
    cin>>s.id;
    cout<<"Enter Student Name : \n";
    cin>>s.name;
    cout<<"Enter Student Grades : \n";
        for(int i =0; i<3 ; i++){
                cout<<"Enter Grade " <<i+1<<": "<<endl;
                cin>>s.grades[i];
        }

    return s;
}

void printStd(student s){
        cout<<"Student Id: "<<s.id<<endl;
        cout<<"Student Name: "<<s.name<<endl;

         for(int i =0; i<3 ; i++){
            cout<<"Student Grade "<<i+1<<": "<<s.grades[i]<<endl;
        }
}
