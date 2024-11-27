#include <iostream>

using namespace std;

//shape base class
class Shape{
protected:
    int dim1;
    int dim2;
public:
    Shape(){dim1=dim2=0;}
    Shape(int m){dim1 = dim2 = m;}
    Shape(int m, int n){
        dim1 = m;
        dim2 = n;
    }

    void setDim_1(int m){
        dim1= m;
    }

    void setDim_2(int n){
        dim2= n;
    }
    int getDim_1(){
        return dim1;
    }
    int getDim_2(){
        return dim2;
    }
    //abstract class
    virtual float calcArea() = 0;

};
//Circle
class Circle : public Shape{
public:
    Circle() {}
    Circle(int r):Shape(r){
    }

    float calcArea(){
        return (3.14 * dim1* dim2);
    }
};

//Triangle
class Triangle : public Shape{

public:
    Triangle(){}
    Triangle(int b, int h) : Shape(b,h){
    }

    float calcArea(){
        return (0.5 * dim1 * dim2);

    }
};


//Recatangle
class Rectangle : public Shape{
public:
    Rectangle(){}
    Rectangle(int l, int w):Shape(l,w){
    }

    float calcArea(){
        return (dim1 * dim2);
    }
};

class Square : public Rectangle{

public:
    Square(){}
    Square(int m): Rectangle(m,m){
    }

};

//geoShape
class GeoShape{
    Shape *ptr[4];

public:
    GeoShape(Shape *pt1, Shape *pt2, Shape *pt3, Shape *pt4){
        ptr[0] = pt1;
        ptr[1] = pt2;
        ptr[2] = pt3;
        ptr[3] = pt3;
    }

    float totalArea(){
        float sum =0;
        for(int i= 0; i< 4; i++){
            sum += ptr[i]->calcArea();
        }
        return sum;
    }
};
int main()
{
    Circle c1(3);
    Rectangle r1(3,4);
    Square s1(4);
    Triangle t1(10,15);

    GeoShape g(&c1, &t1, &r1, &s1);
    cout<<g.totalArea();
    return 0;
}
