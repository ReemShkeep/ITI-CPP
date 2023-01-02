//#ifndef UNTITLED_DISTANCE_H
//#define UNTITLED_DISTANCE_H
#include <iostream>
////#include ""
//#ifndef CALCULATOR_CALCULATOR_H
//#define CALCULATOR_CALCULATOR_H
#include<string>
using namespace std;

class calculator {

public:
    int add (int num1, int num2);
    int add (int num1, int num2, int num3, int num4);
    float add (float num1, float num2);
    string add (string a,string b);

//    calculator();
//    ~calculator();
};

class distance{

private:
    int feet;
    float inch;
public:
    distance();
    distance(int f ,float i);
    void setDist(int f,float i);
    void print();
    distance add_distance(distance d2);
};


#endif //CALCULATOR_CALCULATOR_H
#endif //UNTITLED_DISTANCE_H
