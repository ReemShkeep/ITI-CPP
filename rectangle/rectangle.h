//
// Created by reem on 1/8/23.
//

// #include "stdafx.h"
#include <iostream>
using namespace std;

class rectangle
{
private:
    float length;

    float width;

public:
    // constructor
    rectangle();
    rectangle(float l, float w);
    rectangle merge (rectangle r2);


    // it returns nothing but it takes float    void
    void setLength(float l);

    // it returns nothing but it takes float    void
    void setWidth(float w);

    // it returns float but it takes nothing    float
    float getLength();

    // it returns float but it takes nothing    float
    float getWidth();

    float getArea();



    // ~rectangle();
};
