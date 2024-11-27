#include <iostream>
using namespace std;

class X{
    int m;
public:
    int x;
    X():m(10){
    }
    X(int mm):m(mm){}

    int getm(){return m;}
    };

    class Y :public X{

        int s;
    public:
        Y(int a):s(a){}
        int gets(){return s;}
    };

// Definition of display() outside of the Child class

int main() {
    Y y(100);
    cout<<y.getm()<<" "<<y.gets();

    return 0;
}
