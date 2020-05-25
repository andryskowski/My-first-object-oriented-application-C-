
#include "ClientType.h"

class ClientGold : public ClientType{
public:

    ClientType(int maxVehicle);
    double discount(int price);

};

