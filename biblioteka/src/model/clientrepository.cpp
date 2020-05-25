#include "ClientRepository.h"
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void ClientRepository::createClient(Client *client)
{
    clients.push_back(client);
}

void ClientRepository::removeClient(Client *client)
{
    for(int i=0; i<clients.size(); i++)
    {
        if(clients[i]==client)
        {
            clients.erase(clients.begin()+i);
        }
    }
}