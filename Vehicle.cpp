#include "Vehicle.h"
#include <ctime>
#include <iostream>
using namespace std;
class Bus : public Vehicle {
public:
  Bus(){};
  Bus(int ID) : Vehicle(ID) {}
  int getParkingDuration() override {
    return 0.75 * (time(0) - this->gettimeOfEntry());
  }
};

