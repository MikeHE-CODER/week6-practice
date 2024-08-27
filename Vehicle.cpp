#include "Vehicle.h"
#include <ctime>
#include <iostream>
using namespace std;
class Vehicle {
private:
  time_t timeOfEntry;
  int ID;

public:
  Vehicle() : timeOfEntry(time(0)), ID(0){};
  Vehicle(int ID) : timeOfEntry(time(0)), ID(ID) {}
  Vehicle(time_t t, int ID) : timeOfEntry(t), ID(ID) {}
  int getID() { return ID; }
  time_t gettimeOfEntry() { return timeOfEntry; }
  virtual int getParkingDuration() { return 0; }
};

