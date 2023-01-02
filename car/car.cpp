// Created by reem on 1/8/23.
#include "car.h"
// //after using intialization list
car::car(string m, int mo, string c) : maker(m), model(mo), color(c)
{
}

// //before using intialization list
// car::car() {
//    maker="BMW";
//    model=2024;
//    color="yellow";
//}
void car::setMaker(string m)
{
    maker = m;
}

string car::getMaker()
{
    return maker;
}

int car::getModel()
{
    return model;
}

void car::setModel(int mo)
{
    model = mo;
}

void car::setColor(string c)
{
    color = c;
}
string car::getColor()
{
    return color;
}

car::car():maker("Alshkeep"),model(1996),color("white") {

}
