/***
 * @brief simple Demonstration of CRTP
 * @author Waqar Rashid
 * @details This is just a demon code and I wrote it while learning about crtp. I don't even know if this is correct
 * usage of crtp so take it with a pinch of salt.
 */

#include <iostream>

#include "src/daughter.h"
#include "src/son.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    son Bob = son("Bob");
    daughter Alice = daughter("Alice");

    std::cout<<Bob.getName();

    return 0;
}