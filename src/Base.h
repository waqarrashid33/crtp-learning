//
// Created by waqar on 7/10/19.
//

#ifndef CRTP_BASE_H
#define CRTP_BASE_H

#include <string>

template <class Derived>
class Base{
public:
    std::string getName(){
        Derived& underlying = static_cast<Derived&>(*this);
        return underlying.getNamederived();
    }
};

#endif //CRTP_BASE_H
