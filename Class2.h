//
// Created by PC on 15.10.2023.
//

#ifndef FA433FADWFGAWG_CLASS2_H
#define FA433FADWFGAWG_CLASS2_H

#include "Class1.h"

class Class2 : public Class1{
public:
    void hello() {
        cout << "Hi "+getName() << endl;
    }

};


#endif //FA433FADWFGAWG_CLASS2_H
