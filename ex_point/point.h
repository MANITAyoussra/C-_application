#ifndef POINT_H
#define POINT_H
class point{
    private:
    float x,y;
    public:
    //point(float a,float b);
    void setx(float a);
    void sety(float b);
    float getx(point p);
    float gety(point p);
    double distance(point &p);
    point milieu(point &P);

};


#endif
