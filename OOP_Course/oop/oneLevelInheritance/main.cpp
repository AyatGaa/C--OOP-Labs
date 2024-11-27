#include <iostream>
#include <string.h>
using namespace std;
int getNameSize(char *name ){
    int i =0;
    while(name[i] != '\0'){
        i++;
    }
    return i;
}


class Person{
    int id;
    char name[20];
public:
    Person(){
    id=0;
    strcpy(name, "");
    }
    Person(int i, char n[] ){
        id = i;
       strcpy(name, n);
    }

    void setId(int i){
        id =i;
    }
    void setName(char n[]){
        strcpy(name, n);
        }
    int getId(){return id;}
    char *getName(){
        return name;
    }

    void printData(){

        char *pname = this->getName();
         int nameSize = getNameSize( pname);
         cout<<"Person Name: ";
        for(int i= 0; i<nameSize; i++){
            cout<<*(pname+i);
        }
        cout<<"\n Person ID: "<<this->getId()<<endl;
    }
};

class Customer:public Person{
        int contactNum;
    public:
        Customer(){
            contactNum=0;
        }
        Customer(int i, char n[],int cn):Person(i,n){
            contactNum  =cn;
        }

        void setContact(int cn){
            contactNum = cn;
        }
        int getContact(){
            return contactNum;
        }

        void printData(){


           cout<<"Customrer id:" <<this->getId()<<endl;
            cout<<"Customrer Name:" <<this->getName()<<endl;

        cout<<"Customer Contact Number: "<<this->getContact()<<endl;
    }


};

class Employee: public Person{
    char compaanyName [20];
public:
    Employee(){

    }
    Employee( int i,  char pn [], char n[] ):Person(i,pn){
       strcpy(compaanyName, n);
    }

    void setCompanyName(char n[]){
        strcpy(compaanyName, n);
    }

    char *getCompanyName(){
        return compaanyName;
    }

     void printData(){

           cout<<"Employee id:" <<this->getId()<<endl;
            cout<<"Employee Name:" <<this->getName()<<endl;
        char *pc = this->getCompanyName();
        cout<<"Company Name: ";
         int nameSize2 = getNameSize(pc);
        for(int i= 0; i<nameSize2; i++){
            cout<<*(pc+i);
        }

    }

};

void printPerson(Person *p);
int main()
{

    Person p(11,"AYat");
    p.printData();
    cout<<endl;
    Customer c(77, "ayat1",100221);
    c.printData();
    cout<<endl;
    Employee e(99,"ayat3:","iti");

    e.printData();
    cout<<endl;
    cout<<"=================="<<endl;
    /*
    Person *pt, *pt2;
    Person per;

    Customer c2, *ptc;
    Employee e;
    c2.setContact(555);
    pt = &c2;
    pt2 = &e;
   // ptc = &per; //error can not point from child to parent
    printPerson(pt);
    cout<<endl;
    printPerson(pt2);
    cout<<endl;
    printPerson(ptc);*/

    return 0;
}

void printPerson(Person *p){

   p->printData();

}
