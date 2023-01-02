
#include "calculator.h"
//using namespace std ;
#include <iostream>
#include<string>


int calculator::add (int num1, int num2){
    return num1+num2;
}
int calculator::add (int num1, int num2, int num3, int num4){
    return num1+num2+num3+num4;
}
float calculator::add (float num1, float num2){
    return num1+num2;
}
string calculator::add (string a,string b){
    return a+b;
}


//DISTANCE



void distance::print() {
    cout << "the feet is  "<< feet<< "the inches are "<<inch<<endl;
}

distance distance::add_distance(distance
d2){

distance result ;
//feet bta3y hagm3 3leeh bta3 l d2 eli da5ly
result.feet= feet + d2.feet;
result.inch= inch + d2.inch;
return result;

distance();

}


distance::distance():feet(0),inch(0) {

}

distance::distance(int f, float i):feet(f),inch(i) {

}

void distance::setDist(int f, float i) {
    feet=f;
    inch=i;

}



