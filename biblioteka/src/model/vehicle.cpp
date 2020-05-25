#include <iostream>
#include "Vehicle.h"
#include <sstream>
using namespace std;

Vehicle::Vehicle(){};
//cos tam cos tam

Vehicle::Vehicle(const int b, string i):
        baseRentPrice(b),id(i)
{
    id=i; // nie przypisuje b, bo baseRentPrice jest stala
}

string Vehicle::vehicleInfo(){
    stringstream napis;
    napis<<baseRentPrice<<" "<<id;
    return napis.str();
}

string Vehicle::getVehicleID()
{
    return id;
}

