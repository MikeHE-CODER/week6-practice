#include "Vehicle.h"
#include <ctime>
#include <iostream>
using namespace std;
  Bus::Bus(){};
  Bus::Bus(int ID) : Vehicle(ID) {}
  Bus::Bus(time_t t, int ID) : Vehicle(t, ID) {}
  int Bus::getParkingDuration(){
    return 0.75 * (time(0) - this->gettimeOfEntry());
  }

