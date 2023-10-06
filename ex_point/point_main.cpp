#include<iostream>
#include"point.h"
using namespace std;
int main(){
    point p1,p2;
    //point my_point1(2.0, 3.0);
    //point my_point2(4.0, 5.0);
    //my_point1 += my_point2;
    p1.setx(4.0);
    p1.sety(4.0);
    p2.setx(2.0);
    p2.sety(2.0);

    cout<<"la distance est :"<<p1.distance(p2)<<endl;
    point p3=p1.milieu(p2);
    cout<<"le x du  point milieu:"<< p3.getx(p3)<<endl;
    cout<<"le y du point milieu:"<< p3.gety(p3);
}
