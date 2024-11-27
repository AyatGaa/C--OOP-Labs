#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a; int b; int c;
    int dim; int x1; int x2;
    cout<<"Please Enter The Equation in form (ax^2 + bx + c) "<<endl;
    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;
    cout<<"Enter c"<<endl;
    cin>>c;

    dim = (b*b) - (4*a*c);

    if(dim > 0){
        x1 = ((-1*b) + sqrt(dim))/ (2*a);
        x2 = ((-1*b) - sqrt(dim)) / (2*a);

        cout<< "X1 = "<<x1<<endl;
        cout<< "X2 = "<<x2<<endl;

    }else if(dim == 0){
        x1 = x2 = (-b) / (2*a);
        cout<< "X1 = "<<x1<<endl;
        cout<< "X2 = "<<x2<<endl;

    }else {
        cout<<"Imaginary Number";
    }


}
