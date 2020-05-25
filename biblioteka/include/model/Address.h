#include <string>

class Address{
    std::string street;
    std::string number;
public:
    Address();
    Address(std::string street, std::string number); //chyba moze byc bez tego street i number
    std::string getS();
    std::string getN();
};
