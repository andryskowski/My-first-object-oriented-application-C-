#include <iostream>
#include "CurrentRentsRepository.h"

using namespace std;
int main()
{
    Address address("Wierzbowa", "25");
    Client *c1 = new Client("Stanislaw","Andryskowski","1", &address, &address);
    Client *c2 = new Client();;
   // cout<<c1->clientInfo();
    //cout<<c2->clientInfo();
  //  Vehicle vehicle('9', "1");
  //  vehicle.vehicleInfo();
  //  Rent *rent = new Rent(c1, &vehicle);
    Car car(1, "1234", 1200, 'B');
    Rent rent(c1, &car);
  //  cout<<rent.rentInfo();
   // cout<<"Dni wypozyczenia: "<<endl;
  //  cout<<rent.rentDuration();
   // cout<<endl;
  //  rent.returnVehicle();
 //   cout<<"COS TAM"<<endl;
  //  cout<<rent.rentInfo();
   // cout<<"Dni wypozyczenia: "<<endl;
   // cout<<"tu mi sie pokaz ceno: "<<endl;

   // cout<<car.actualRentalPrice;

   CurrentRentsRepository rentRep;
    rentRep.createRent(&rent);
    cout<<rentRep.rentReport();
 //   rentRep.rentReport(&rent);

 //   cout<<rent.rentInfo();
 cout<<endl;
cout<<"isAvailable ---> ";

    cout<<rentRep.isAvailable(&car);
    rentRep.isAvailable(&car);
  //  cout<<rentRep.getClientForRentedVehicle(&car);
 //   rentRep.removeRent(&rent);
cout<<"   "<<endl;
    delete c1;
    delete c2;
 //   delete rent;
    return 0;
}

//    Client c1("", "", "");

//A *a = new A[n]; // klasa musi zawierać konstruktor domyślny!
//delete []a;
//Client *c1 = new c1[];
//delete []c1;

