//
// Created by student on 11.11.2019.
//

#ifndef POBIPROJECT_MOPE_H
#define POBIPROJECT_MOPE_H
#include "MotorVehicle.h"

class Mope : public MotorVehicle{
public:
    Mope(int baseRentPrice, std::string id, int engineDisplacement);
    ~Mope();
};


#endif //POBIPROJECT_MOPE_H
