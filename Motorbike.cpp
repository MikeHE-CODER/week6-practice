#include "Vehicle.h"
#include <ctime>
#include <iostream>
using namespace std;
Motorbike::Motorbike(){};
Motorbike::Motorbike(int ID) : Vehicle(ID) {}
Motorbike::Motorbike(time_t t, int ID) : Vehicle(t, ID) {}
int Motorbike::getParkingDuration() override {
    return 0.85 * (time(0) - this->gettimeOfEntry());
  }

