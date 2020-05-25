//
// Created by student on 11.11.2019.
//

#ifndef POBIPROJECT_BICYCLE_H
#define POBIPROJECT_BICYCLE_H
#include "Vehicle.h"
using namespace std;

class Bicycle : public Vehicle
        {
public:
    Bicycle(int baseRentPrice, std::string id);

~Bicycle();
};


#endif //POBIPROJECT_BICYCLE_H
