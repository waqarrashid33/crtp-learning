//
// Created by waqar on 7/10/19.
//

#ifndef CRTP_SON_H
#define CRTP_SON_H


#include "Base.h"

class son: public Base<son> {

public:
    std::string getNamederived(){
        return Name;
    }

    son(const std::string &name) : Name(name) {}

private:
    std::string Name;
};


#endif //CRTP_SON_H
