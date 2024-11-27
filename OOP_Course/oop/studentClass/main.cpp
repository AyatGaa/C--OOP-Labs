#include <iostream>
#include <string.h>

using namespace std;

class Student{
    private:
        int id;
        char name[20];
        int grade;

    public:
        Student(){
            id = 0;
            strcpy(name, " ");
            grade = 0;
        }

        Student(int i, char n [], int g){
            id = i;
            strcpy(name, n);
            grade = g;
        }

        void setId(int i ){
            this->id = i;
        }

          void setName(char n [] ){
            strcpy(name, n);
        }
          void setGrade(int g ){
            this->grade = g;
        }

        int getId(){
            return id;
        }

        char * getName(){
            return name;
        }

        int getGrade(){
            return grade;
        }

};

int getNameSize(char *name );
Student fillStudent();
void printStudent(Student s);
int main()
{
    //to check default values (default constructor )
    Student s;
  /*cout<<"Student Id : " <<s.id<<endl; // throgh error due to access modifier
    cout<<"Student Name: "<<s.name<<endl;
    cout<<"Student Grade: "<<s.grade<<endl;
    cout<<"=========================\n";
    //to check parameterized constructor
    Student s2(9,"aya", 55);
    cout<<"Student Id : " <<s2.id<<endl;
    cout<<"Student Name: "<<s2.name<<endl;
    cout<<"Student Grade: "<<s2.grade<<endl;
*/

    //Encapsulation ==>use setters and getters
/*
    Student s3;
    s3.setId(77);
    s3.setName("ayatttttt");
    s3.setGrade(99);

    char *ptr = s3.getName();
    int nameSize = getNameSize( ptr);

    cout<<"Student Id : " <<s3.getId()<<endl;
    cout<<"Student Name: ";
        for(int i = 0 ; i<nameSize ; i++){
                cout<<*(ptr+i);
        }
    cout<<endl;
    cout<<"Student Grade: "<<s3.getGrade()<<endl;
    cout<<endl;
    cout<<"Size name =>"<<nameSize<<endl;
  */

  Student s4;
  s4 = fillStudent();
  cout<<endl;
  printStudent(s4);
    return 0;
}
int getNameSize(char *name ){
    int i =0;
    while(name[i] != '\0'){
        i++;
    }
    return i;
}

Student fillStudent(){
    Student s;
    int i,g;
    char n[20];
    cout<<"Enter Student Id: ";
    cin>>i;
    s.setId(i);
    cout<<"Enter Student Name: ";
    cin>>n;
    s.setName(n);
    cout<<"Enter Student Grade: ";
    cin>>g;
    s.setGrade(g);
    return s;
}
void printStudent(Student s){
    cout<<"Student Id : " <<s.getId()<<endl;
    char *ptr = s.getName();
    int nameSize = getNameSize( ptr);
    cout<<"Student Name: ";
    for(int i = 0 ; i<nameSize ; i++){
            cout<<*(ptr+i);
    }
    cout<<endl;
    cout<<"Student Grade: "<<s.getGrade()<<endl;
    cout<<endl;
}
