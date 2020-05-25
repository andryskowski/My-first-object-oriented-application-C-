//
// Created by student on 11.11.2019.
//

#include "Car.h"

Car::Car( int baseRentPrice, std::string id, int engineDisplacement, char segment):
        MotorVehicle(baseRentPrice, id,  engineDisplacement),
        segment(segment)
{
    setSegment();
}


void Car::setSegment() {
    switch (segment) {
        case 'A':
            break;

        case 'B':
            actualRentalPrice *= 1.1;
            break;

        case 'C':
            actualRentalPrice *= 1.2;
            break;

        case 'D':
            actualRentalPrice *= 1.3;
            break;

        case 'E':
            actualRentalPrice *= 1.4;
            break;

        case 'F':
            actualRentalPrice *= 1.5;
            break;

        default:
            break;
    }
}

Car::~Car()
{ }