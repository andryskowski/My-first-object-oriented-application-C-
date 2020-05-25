#include "VehicleRepository.h"
#include <iostream>
#include <sstream>

using namespace std;



void VehicleRepository::createVehicle(Vehicle *vehicle)
{
    vehicles.push_back(vehicle);
}

void VehicleRepository::removeVehicle(Vehicle *vehicle)
{
    for(int i=0; i<vehicles.size(); i++)
    {
        if(vehicles[i]==vehicle)
        {
            vehicles.erase(vehicles.begin()+i);
        }
    }
}

string VehicleRepository::vehicleReport()
{
    stringstream napis;
    for( int i = 0; i < vehicles.size(); i++ )
    {
        napis<< endl <<vehicles[i]->vehicleInfo();
    }
    return napis.str();
}

Vehicle* VehicleRepository::find(string id){
    for(int i=0; vehicles.size(); i++)
    {
        if(vehicles[i]->getVehicleID()==id)
        {
            return vehicles[i];
        }
    }
}