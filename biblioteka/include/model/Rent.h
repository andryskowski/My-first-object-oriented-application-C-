#include <boost/uuid/uuid.hpp>
#include <boost/date_time/local_time/local_time.hpp>
#include <memory>
#include "Client.h"
#include "Car.h"
#include "Mope.h"


typedef boost::local_time::local_date_time LTime;
typedef boost::local_time::time_zone_ptr TZone;
typedef boost::posix_time::ptime PTime;

class Rent {
    boost::uuids::uuid UUID;
    Vehicle* vehicle;
    Client* client;
    TZone timeZone{new boost::local_time::posix_time_zone("CET+1")};
    LTime begin=LTime(PTime(), TZone());
    LTime end=LTime(PTime(), TZone());
public:

    Rent(Client* c, Vehicle* v);
    std::string rentInfo(bool cInfo=true);
    Vehicle* getVehicle();
    Client* getClient();

    int rentDuration();
    void returnVehicle();
    ~Rent();
};

