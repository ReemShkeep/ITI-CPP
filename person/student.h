//
// Created by reem on 1/10/23.
//

#ifndef PERSON_STUDENT_H
#define PERSON_STUDENT_H
#include <iostream>
using namespace std;
#include "person.h"
#include <string>

class student : public person{
private:
    int level;
    float GPA;
    string dep;
public:
void setLevel(int l);
int getLevel();
void setGPA(float g);
float getGPA();
void setDep(string d);
string getDep();





};


#endif //PERSON_STUDENT_H
