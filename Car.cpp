#include "Vehicle.h"
#include <ctime>
#include <iostream>
using namespace std;
class Car : public Vehicle {
public:
  Car(){};
  Car(int ID) : Vehicle(ID) {}
  int getParkingDuration() override {
    return 0.9 * (time(0) - this->gettimeOfEntry());
  }
};
