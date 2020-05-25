#include <boost/uuid/random_generator.hpp>
#include <boost/date_time/local_time/local_time.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/uuid/uuid_io.hpp>
#include "Rent.h"

using namespace std;

Rent::Rent(Client *c, Vehicle *v):
client(c),
vehicle(v)
{
    UUID = boost::uuids::random_generator()();
  //  begin = boost::local_time::local_sec_clock::local_time(timeZone);
    begin = boost::local_time::local_sec_clock::local_time(timeZone)-boost::gregorian::date_duration(10);

    end = boost::local_time::local_sec_clock::local_time(timeZone);
    client->addRent(this);
}

string Rent::rentInfo(bool cInfo){
    stringstream ret;

    ret <<"UUID: "<< UUID << ' ';
    ret <<"Begin: "<< begin << ' ';
    if(end.is_not_a_date_time()){
        ret << rentDuration() << ' ';
    }else{
        ret << end << ' ';
    }

    if(cInfo){
        ret << client->clientInfo() << ' ';
    }
  //  if(vehicle!=nullptr)
    ret << vehicle->vehicleInfo();
    return ret.str();
}

int Rent::rentDuration(){
    if(end.is_not_a_date_time()) return 0;
    if(end.date()<begin.date()) ;
    return (end.date()-begin.date()).days()+1;
}

void Rent::returnVehicle(){
    vehicle=nullptr;
}

Vehicle* Rent::getVehicle(){
    return vehicle;
}

Client* Rent::getClient(){
    return client;
}

Rent::~Rent(){};



void Rent::changeClientType
{
if (number_of_enum==1)
{
    ClientType* = ClientGold;
}
}