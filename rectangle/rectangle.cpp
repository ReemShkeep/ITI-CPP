// Created by reem on 1/8/23.
#include "rectangle.h"
using namespace std;

// it returns nothing but it takes float    void
// its a constructor from class rectangle

rectangle::rectangle(float l, float w):length(l), width(w)
{
}
rectangle::rectangle merge (rectangle r2){

    //3mlu 3shan ast2bl feh l nateg

    rectangle r3;
    r3.length= length +r2.length;
    r3.width= width+r2.width;
    return r3;


}



void rectangle::setLength(float l)
{
    if (l >= 0)
        length = l;
    else
        cout << "ERROR,please enter +ve numbers ";
}

// it returns nothing but it takes float    void
void rectangle::setWidth(float w)
{
    if (w >= 0)
        width = w;
    else
        cout << "ERROR,please enter +ve numbers " << endl;
}

// it returns float but it takes nothing    float
float rectangle::getLength()
{
    return length;
}

// it returns float but it takes nothing    float
float rectangle::getWidth()
{
    return width;
}

float rectangle::getArea()
{
    return length * width;
}

rectangle::rectangle():length(0),width(0) {

}



// rectangle::~rectangle() = default;
