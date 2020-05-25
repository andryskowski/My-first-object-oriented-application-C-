#include <string>
#include <memory>
#include <vector>

using namespace std;

class Vehicle{
protected: //wczesniej bylo private
    const int baseRentPrice=0;
    std::string id;
public:
    Vehicle();
    Vehicle(const int baseRentPrice, std::string id);
    virtual string vehicleInfo();
    string getVehicleID();
//    std::string vehicleInfo();
};

