//
// Created by student on 11.11.2019.
//

#ifndef POBIPROJECT_CAR_H
#define POBIPROJECT_CAR_H
#include "MotorVehicle.h"

class Car : public MotorVehicle {
    char segment;
public:
    Car(int baseRentPrice, std::string id,  int engineDisplacement, char segment);
    void setSegment();
    ~Car();
};
#endif //POBIPROJECT_CAR_H