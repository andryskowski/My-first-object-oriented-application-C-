#include "Vehicle.h"


class VehicleRepository{
    std::vector <Vehicle*> vehicles;
public:
    VehicleRepository();
    void createVehicle(Vehicle* vehicle);
    void removeVehicle(Vehicle* vehicle);
    string vehicleReport();
    Vehicle* find(string id);
};

/*
class CurrentRentsRepository {
    std::vector <Rent*> rents;
public:
    // CurrentRentsRepository();
    void createRent(Rent* rent);
    void removeRent(Rent* rent);
    string rentReport();
    bool isAvailable(Vehicle *vehicle);
    string getClientForRentedVehicle(Vehicle *);

}; */