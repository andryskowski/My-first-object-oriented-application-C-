//
// Created by student on 11.11.2019.
//
#include "MotorVehicle.h"
#include <sstream>

MotorVehicle::MotorVehicle(int baseRentPrice, std::string id,  int engineDisplacement):
        Vehicle(baseRentPrice, id),
        engineDisplacement(engineDisplacement)
{
    actualRentalPrice=0;
    actualRentPrice();
}

void MotorVehicle::actualRentPrice()
{
    if(engineDisplacement>1000 && engineDisplacement<2000)
    {
        //  (engineDisplacement-1000; <- odleglosc od dolnej belki / 1000 )*0.5 +1;
        actualRentalPrice=((float)(engineDisplacement-1000)/1000.0)*0.5+1;
    }
    if(engineDisplacement>2000)
        actualRentalPrice=baseRentPrice*1.5;
}

string MotorVehicle::vehicleInfo() {
    stringstream napis;
    napis << Vehicle::vehicleInfo()<<endl << "Pojemnosc silnika: "<< engineDisplacement;
    return napis.str();
}

MotorVehicle::~MotorVehicle()
{ }