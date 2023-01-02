#include <iostream>

using namespace std;
#include "student.h"

int main()
{
//
    student s1;
    s1.displayPerson();


    s1.setAge(27);
    s1.setName("Ahmed");
    s1.setGender("Male");
    s1.displayPerson();

    student s2;
    s2.displayPerson();

    student s3(s1);
    s3.displayPerson();

//    s1.
//    std::cout<<"Hello, World!"<<std::endl;
    return 0;
}
