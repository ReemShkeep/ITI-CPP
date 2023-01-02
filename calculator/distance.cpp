#include "distance.h"
#include <iostream>
using namespace std;

distance::distance(int f, float i):feet(f),inches(i){
}

distance::distance():feet(0),inches(0.0) {
}

void distance::setDist(int f, float i) {
    feet=f;
    inches=i;
}

void distance::print() {
cout<<"feet= "<<feet<<"\t inche= "<<inches<<endl;
}
