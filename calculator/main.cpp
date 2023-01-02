#include "calculator.h"
#include <iostream>
using namespace std;
#include <string>
#include "distance.h"

int main() {

    //method overloading
    calculator c1;
    cout<<"this version no.1 "<< c1.add(3,7)<<"\n";
    cout<<"this version no.2 "<< c1.add(3.6,3)<<"\n";
    //leeh msh b3rf a7ut float hna ??
    cout<<"this version no.3 " <<c1.add(3,4,5,8)<<"\n";
    cout<<"this version no.4  "<<c1.add("hello","  Remoooosh ")<<"\n";
    distance d1(5,5);
    distance d2(6,8);
    distance d3= d1.add_distance(distance d2);
    d3.print();



//    std::cout << "Hello, World!" << std::endl;
    return 0;
}
