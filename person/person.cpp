//
// Created by reem on 1/10/23.
//
#include <iostream>
#include <string>
using namespace std;
#include "person.h"


//person::person():Name("lady's Name" ),Age(21),Gender("female ") {
person::person():Name("UNKNOWN" ),Gender("UNKNOWN "),Age(0){

    }


person::person(string n, string g, int a):Name(n),Age(a),Gender(g) {

}

void person::setName(string n) {
Name=n;
}
void person::setGender(string g) {
Gender=g;
}
void person::setAge(int a) {
Age=a;
}

string person::getName() {
    return Name;
}
string person::getGender() {
    return Gender;
}
int person::getAge() {
    return Age;
}
void person::displayPerson() {
    cout<<"the person basic data is "<<endl;
//    cout<<"The name is  \n" <<Name <<"\nThe age is  \n " <<Age <<"\nThe Gender is \n "<<Gender<<endl;
    cout<<Name <<" " <<Age <<" "<<Gender <<" " <<endl;
//    cout<<"The name is" <<getName <<"The age is" <<getAge <<"The Gender is "<<getGender<<endl;
}

