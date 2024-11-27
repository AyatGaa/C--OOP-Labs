#include <iostream>
#include <string.h>

using namespace std;

class Student{
    private:
        int id;
        char name[20];
        int grade;
        static int stdCount;
        static char schoolName[20];

    public:
        Student(){
            stdCount++;
            id = 0;
            strcpy(name, " ");
            grade = 0;
        }

        Student(int i, char n [], int g){
            stdCount++;
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

        static int getStdCount(){
            return stdCount;
        }

        static void setSchoolName(char sn []){
            strcpy(schoolName, sn);
        }
        static char * getSchoolName(){
            return schoolName;
        }

        ~Student(){
            stdCount--;
        }

};

int Student::stdCount =0;
char Student::schoolName[20] = {"ITI"};

int getNameSize(char *name );
void printStudent(Student s);
Student fillStudent();


int main()
{
    Student::setSchoolName("ITI_Intake_45");
    cout<<"School Name "<<Student::getSchoolName()<<endl;

        /** check static counter **/
    /*
        Student s4;
        s4 = fillStudent();
        cout<<"Student Count : "<<Student::getStdCount()<<endl;
        cout<<endl;
        printStudent(s4);
    */

    /**array of Students with Dynamic Allocation**/

    Student *ps;
    int numOfSstd;
    cout<<"Enter Number of student : ";
    cin>>numOfSstd;
    ps = new Student[numOfSstd];

    //fill students
    for(int i = 0 ; i<numOfSstd ; i++){
        ps[i] = fillStudent();
    }

    cout<<endl;
    cout<<"Student count ="<<Student::getStdCount()<<endl;

    //print students
    for(int i = 0 ; i<numOfSstd ; i++){
        printStudent(ps[i]);
        cout<<endl;
    }

     delete [] ps; // delete array of students
     /**
        each object has been deleted after each fill to student data
        so, when i call the delete statement it delete more objects i don't know about it
     */

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
