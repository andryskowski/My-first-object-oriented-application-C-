#include <iostream>
#include "Address.h"

using namespace std;

Address::Address(){};

Address::Address(string s, string n){
    street=s;
    number=n;
}

string Address::getS(){
    return street;
}

string Address::getN(){
    return number;
}