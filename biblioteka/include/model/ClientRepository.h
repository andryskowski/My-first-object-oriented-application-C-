#include "Client.h"

class ClientRepository {
    std::vector <Client*> clients;
public:
    ClientRepository();
    void createClient(Client* client);
    void removeClient(Client* client);


};
