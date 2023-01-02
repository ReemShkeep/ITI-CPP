// Created by reem on 1/8/23.
#ifndef UNTITLED_DISTANCE_H
#define UNTITLED_DISTANCE_H
#include <iostream>
//#include ""


class distance {
private:
    int feet;
    float inches;
public:
    //default constractor
    distance();

    //intialized costr.
    distance(int f, float i);
    // it returns nothing but it takes float    void
    void setDist(int f,float i);

//    void print(int f,float i);   da 8lltttt
    void print();

    // it returns float but it takes nothing    float

};

#endif //UNTITLED_DISTANCE_H

