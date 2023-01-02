 #include <iostream>
#include "rectangle.h"
 using namespace std;


int main()
{

//    //its a obj from class rec called box
   rectangle box1 (-40.5, 30.6);
   rectangle box2 ( 40.5, 30.6);
   rectangle box3 ( 7, 5);

   //default constructor
   rectangle box4;

//ezay hata length bl -ve w madrbsh error???????????


//   // before initialization list
//    box.setLength(-40.5);
//    box.setWidth(30.6);
   cout << "the area of the rectangle are is " << box1.getArea() << "\n";
   cout << "the area of the rectangle are is " << box2.getArea() << "\n";
    cout << "the area of the rectangle are is " << box3.getArea() << "\n";

   //default constractor
    cout << "the area of the rectangle are is " << box4.getArea() << "\n";



//    // #include <iostream>
//    // using namespace std;
//    // to use cout
    return 0;
}
