#include "Vehicle.h"
#include <ctime>
#include <iostream>
using namespace std;
Car::Car(){};
Car::Car(int ID) : Vehicle(ID) {}
Car::Car(time_t t, int ID) : Vehicle(t, ID) {}
Car::int getParkingDuration() override {
    return 0.9 * (time(0) - this->gettimeOfEntry());
  }
};

