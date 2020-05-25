//
// Created by student on 11.11.2019.
//

#ifndef POBIPROJECT_CURRENTRENTSREPOSITORY_H
#define POBIPROJECT_CURRENTRENTSREPOSITORY_H
#include "Rent.h"

class CurrentRentsRepository {
    std::vector <Rent*> rents;
public:
   // CurrentRentsRepository();
   void createRent(Rent* rent);
   void removeRent(Rent* rent);
   string rentReport();
   bool isAvailable(Vehicle *vehicle);
   string getClientForRentedVehicle(Vehicle *vehicle);

};



#endif //POBIPROJECT_CURRENTRENTSREPOSITORY_H
