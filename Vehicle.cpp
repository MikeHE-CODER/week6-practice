#include "Vehicle.h"
#include <ctime>
#include <iostream>
using namespace std;
Vehicle::Vehicle() : timeOfEntry(time(0)), ID(0){};
Vehicle::Vehicle(int ID) : timeOfEntry(time(0)), ID(ID) {}
Vehicle::Vehicle(time_t t, int ID) : timeOfEntry(t), ID(ID) {}
int Vehicle::getID() { return ID; }
time_t Vehicle::gettimeOfEntry() { return timeOfEntry; }
virtual int Vehicle::getParkingDuration() { return 0; }

