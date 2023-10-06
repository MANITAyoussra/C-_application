#include"point.h"
#include<iostream>
#include<cmath>
using namespace std;
    //point::point(float a,float b){
      // x=a;
      // y=b;
//    }
    void point::setx(float a){
        x=a;
    }
    void point::sety(float b){
        y=b;
    }
    float point::getx(point p){
        return(p.x);
    }
    float point::gety(point p){
        return(p.y);
    }
    double point::distance(point &p){
       return (sqrt(pow((this->x-getx(p)),2)+pow((this->y-gety(p)),2)));

    }
    point point::milieu(point &P){
       point p1;
       p1.x=(this->x+getx(P))/2;
       p1.y=(this->y+gety(P))/2;
       return(p1);
    }

