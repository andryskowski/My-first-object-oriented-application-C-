//
// Created by student on 11.11.2019.
//
#include "CurrentRentsRepository.h"
#include <iostream>
#include <sstream>
using namespace std;

//CurrentRentsRepository::CurrentRentsRepository()
//{
 //   cout<<"Wywolano konstruktor bezparametrowy"<<endl;
//}

void CurrentRentsRepository::createRent(Rent *rent)
{
        rents.push_back(rent);
}

void CurrentRentsRepository::removeRent(Rent *rent)
{
    for(int i=0; i<rents.size(); i++)
    {
        if(rents[i]==rent)
        {
            rents.erase(rents.begin()+i);
        }
    }
}

string CurrentRentsRepository::rentReport()
{
    stringstream napis;
    for( int i = 0; i < rents.size(); i++ )
    {
        napis<< endl <<rents[i]->rentInfo();
    }
    return napis.str();
}

bool CurrentRentsRepository::isAvailable(Vehicle *vehicle)
{
    for(int i=0; i<rents.size(); i++)
    {
       if (rents[i]->getVehicle() == vehicle)
        {
            return true;
        }
    }
    return false;
}

string CurrentRentsRepository::getClientForRentedVehicle(Vehicle *vehicle)
{
    for(int i=0; i<rents.size(); i++)
{
    if (rents[i]->getVehicle() == vehicle)
    {
        return rents[i]->getClient()->clientInfo();
    }
}

}

