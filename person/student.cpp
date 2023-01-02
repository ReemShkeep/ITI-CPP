//
// Created by reem on 1/10/23.
//

#include "student.h"

void student::setLevel(int l) {
    level=l;

}

int student::getLevel() {
    return level;
}

void student::setGPA(float g) {
    GPA=g;
}

float student::getGPA() {
    return GPA ;
}

void student::setDep(string d) {
    dep=d;
}
string student::getDep(){
    return dep;
}
