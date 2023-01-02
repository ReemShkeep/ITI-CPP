// Created by reem on 1/8/23.
// esmha a hatrg3 output nu3u a w bta5ud input nu3u a

#ifndef UNTITLED_CAR_H
#define UNTITLED_CAR_H

#include <string>
using namespace std;

class car
{
private:
    string maker;
    int model;
    string color;

public:
    // constractor
    car(string m, int mo, string c);

    // it returns nothing but it takes string    void
    void setMaker(string m);
    // it returns string but it takes nothing    string
    string getMaker();
    void setModel(int m);
    int getModel();
    void setColor(string c);
    string getColor();
    //
        car();
//        ~car();
};

#endif // UNTITLED_CAR_H
