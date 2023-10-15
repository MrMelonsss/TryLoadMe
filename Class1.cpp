//
// Created by PC on 15.10.2023.
//

#include "Class1.h"

bool Class1::isNight() const {
    return night;
}

void Class1::setNight(bool night) {
    Class1::night = night;
}

int Class1::getAge() const {
    return age;
}

void Class1::setAge(int age) {
    Class1::age = age;
}

const string &Class1::getName() const {
    return name;
}

void Class1::setName(const string &name) {
    Class1::name = name;
}
