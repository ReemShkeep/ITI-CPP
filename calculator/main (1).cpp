#include <iostream>
#include "distance.h"
//using namespace std

int main() {

    distance d1;
    distance d2 (5,3.5);
    distance d3(d2);
    d3.print();
    d3.setDist(7,4.25);
    distance d4=d3;
    d4.print();

//    cout << "Hello, World!" << endl;
    return 0;
}
