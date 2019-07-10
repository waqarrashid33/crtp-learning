//
// Created by waqar on 7/10/19.
//

#ifndef CRTP_DAUGHTER_H
#define CRTP_DAUGHTER_H

#include <string>
#include "Base.h"

class daughter: public Base<daughter> {
public:
    daughter(const std::string &name) : Name(name) {}

    std::string getNamederived(){
        return Name;
    }
private:
    std::string Name;
};

#endif //CRTP_DAUGHTER_H
