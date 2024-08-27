#include "Vehicle.h"
#include <ctime>
#include <iostream>
using namespace std;
class Motorbike : public Vehicle {
public:
  Motorbike(){};
  Motorbike(int ID) : Vehicle(ID) {}
  Motorbike(time_t t, int ID) : Vehicle(t, ID) {}
  int getParkingDuration() override {
    return 0.85 * (time(0) - this->gettimeOfEntry());
  }
};

