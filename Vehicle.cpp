#include "Vehicle.h"
#include <ctime>
#include <iostream>
using namespace std;
Vehicle::Vehicle() : timeOfEntry(time(0)), ID(0){};
Vehicle::Vehicle(int ID) : timeOfEntry(time(0)), ID(ID) {}
Vehicle::Vehicle(time_t t, int ID) : timeOfEntry(t), ID(ID) {}
Vehicle::int getID() { return ID; }
Vehicle::time_t gettimeOfEntry() { return timeOfEntry; }
Vehicle::virtual int getParkingDuration() { return 0; }

