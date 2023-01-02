// Created by reem on 1/10/23.
#ifndef PERSON_PERSON_H
#define PERSON_PERSON_H
#include <iostream>
#include <string>
using namespace std;


class person {
private:
    string Name;
    string Gender;
    int Age;


public:
    person();
    person(string n,string g, int a);
    void setName(string n);
    void setGender(string g);
    void setAge(int a);
    string getName();
    string getGender();
    int getAge();
    void displayPerson();

};


#endif //PERSON_PERSON_H
