//
// Created by PC on 15.10.2023.
//
#include <iostream>
#ifndef FA433FADWFGAWG_CLASS1_H
#define FA433FADWFGAWG_CLASS1_H

using namespace std;

class Class1 {
private:
    int age;
    string name;
public:
    bool night;
    bool isNight() const;

    void setNight(bool night);

    int getAge() const;

    void setAge(int age);

    const string &getName() const;

    void setName(const string &name);
};


#endif //FA433FADWFGAWG_CLASS1_H
