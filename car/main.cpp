#include <iostream>
#include "car.h"
using namespace std;

int main()
{

    //    car c1(int m,string mo,string c);   wrongggg

    car c1("NISAN", 2023, "black");
    car c5("Honda", 2022, "Black and grey");
    //    c1.setMaker("NISAN");
    //    c1.setModel(2019);
    //    c1.setColor("Red and white");
    cout << "this car manufacture is " << c1.getMaker() << "\n";
    cout << "this car model is " << c1.getModel() << endl;
    cout << "and the colors that available for this model are:  " << c1.getColor() << "\n";

    //    c5.setMaker(m:"Honda");
    //    c5.setColor(c:"Black and grey");
    //    c5.setModel(m:2022);
    cout << "the maker of the car is " << c5.getMaker() << "\n";
    cout << "the color available for the car are  " << c5.getColor() << "\n";
    cout << "the model of the car is " << c5.getModel() << "\n";

    //default constructor
    car c2;
    cout << "the maker of the car is " << c2.getMaker() << "\n";
    cout << "the color available for the car are  " << c2.getColor() << "\n";
    cout << "the model of the car is " << c2.getModel()<< "\n";



    return 0;
}
