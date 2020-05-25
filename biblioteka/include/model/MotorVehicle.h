//
// Created by student on 11.11.2019.
//

#ifndef POBIPROJECT_MOTORVEHICLE_H
#define POBIPROJECT_MOTORVEHICLE_H
#include "Vehicle.h"

class MotorVehicle : public Vehicle
{
    int engineDisplacement;

public:
    float actualRentalPrice;
    MotorVehicle(int baseRentPrice, std::string id,  int engineDisplacement);
    float setPriceEngine();
    void actualRentPrice();
    string vehicleInfo();
    ~MotorVehicle();

};


#endif //POBIPROJECT_MOTORVEHICLE_H