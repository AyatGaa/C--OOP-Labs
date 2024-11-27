#include <iostream>
#include <math.h>
using namespace std;

class Point{
    int x;
    int y;

public:
    Point(){
        x = y = 0;
    }
    Point(int v){
        x = y = v;
    }

    Point(int m, int n){
        x = m;
        y = n;
    }

    void setX(int m){
        x = m;
        }
    void setY(int n){
        y = n;
        }

    int getX(){
        return x;
        }
    int getY(){
        return y;
        }

};

class Rectangle_C{ // Composition
        Point pt1, pt2;
        int length;
        int width;

    public:
        Rectangle_C(){
           length = width = 0;
        }

        Rectangle_C(int x1, int y1, int x2, int y2):pt1(x1,y1), pt2(x2,y2){
            length = abs(x2 - x1);
            width = abs(y2 - y1);
        }
        void setP1(int x, int y){
            pt1.setX(x);
            pt1.setY(y);
        }


        void setP2(int x, int y){
            pt2.setX(x);
            pt2.setY(y);
        }

        float getArea(){
            return ((float)length * float(width));
        }
};

class Rectangle_A{
    Point *pt1, *pt2;
    int length;
    int width;

public:
    Rectangle_A(){
        pt1 = pt2 = NULL;
    }

    Rectangle_A(Point *p1, Point *p2){
        pt1 = p1;
        pt2 = p2;

        if(pt1 != NULL && pt2 != NULL){
            length = abs(pt2->getX() - pt1->getX());
            width = abs(pt2->getY() - pt1->getY());
        }
    }

    void shape1(Point *p){
        pt1 = p;
         if(pt1 != NULL && pt2 != NULL){
            length = abs(pt2->getX() - pt1->getX());
            width = abs(pt2->getY() - pt1->getY());
        }
    }
        void shape2(Point *p){
        pt2 = p;
         if(pt1 != NULL && pt2 != NULL){
            length = abs(pt2->getX()- pt1->getX());
            width = abs(pt2->getY() - pt1->getY());
        }
    }

};
int main()
{
    Rectangle_C r1(10,20,50,70);
    cout<<"Area = " <<r1.getArea();


    Point p1(2,5);
    Point p2(6,6);
    Point p3(1,1);

    Rectangle_A r2(&p1, &p3);
    cout<<endl;

    r2.shape1(&p2);
    return 0;
}
