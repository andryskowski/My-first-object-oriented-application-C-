#include <string>
#include <memory>
#include <vector>
#include "Address.h"
#include "ClientType.h"
//typedef std::shared_ptr<Address> Address_ptr; //tu jest ten wskaznik z address.h

class Rent;
//typedef std::shared_ptr<Address> Address_ptr;

//typedef std::shared_ptr<Rent> Rent_ptr;


class Client{

private:
	std::string firstName;
	std::string lastName;
	std::string personalID;
   Address* registeredAddress= nullptr;
   Address* address= nullptr;

public:

    //Client(std::string firstName, std::string lastName, std::string personalID);
    Client(std::string firstName, std::string lastName, std::string personalID, Address* address, Address* registeredAddress);
    Client();
    std::vector <Rent*> rents;
    void addRent(Rent* rent);
	std::string clientInfo();
    std::string getFirstName();
    std::string getLastName();
    std::string getPersonalID();;
    ~Client();

};
