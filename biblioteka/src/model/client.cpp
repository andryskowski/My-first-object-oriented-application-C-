#include <iostream>
#include "Client.h"
#include <sstream>


using namespace std;

//konstruktor parametrowy
Client::Client(string firstName, string lastName, string personalID, Address *address, Address *registeredAddress):
	firstName(firstName),
	lastName(lastName),
	personalID(personalID),
    registeredAddress(registeredAddress),
    address(address),

{}



Client::Client()
{
    cout<<"Wywolano konstruktor bezparametrowy"<<endl;
}

Client::~Client(){
    cout << "Wywolano destruktor\n";
}
// tu cos z pustym klientem dac



string Client::clientInfo() {
    string ret = firstName+" "+lastName+" "+personalID;

    if(address!=nullptr){
        ret += " " + address->getS();
        ret += " " + address->getN();
    }
    if(registeredAddress!=nullptr){
        ret += " " + registeredAddress->getS();
        ret += " " + registeredAddress->getN();
    }
    return ret;
}

void Client::addRent(Rent *rent){
    rents.push_back(rent);
}

string Client::getFirstName(){
    return firstName;
}

string Client::getLastName(){
    return lastName;
}

string Client::getPersonalID(){
    return personalID;
}

