#ifndef MODULESDOSHCHENKO_H_INCLUDED
#define MODULESDOSHCHENKO_H_INCLUDED

#include <cmath>

class ClassLab12_Doshchenko{
public:
    ClassLab12_Doshchenko(){}
    ClassLab12_Doshchenko(float radius);
    void setRadius(float radius);
    float getRadius();
    float getVolumeBall();
private:
    float radius = 0.0;
};

ClassLab12_Doshchenko::ClassLab12_Doshchenko(float radius){
    this->radius = radius;
}

void ClassLab12_Doshchenko::setRadius(float radius){
    this->radius = radius;
}

float ClassLab12_Doshchenko::getRadius(){
    return radius;
}

float ClassLab12_Doshchenko::getVolumeBall(){
    return (4 * M_PI * pow(radius, 3))/3;
}

#endif // MODULESDOSHCHENKO_H_INCLUDED