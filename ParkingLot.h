#ifndef ParkingLot_h
#define ParkingLot_h
#include "Car.h"
#include "Motorbike.h"
#include "Vehicle.h"
#include <ctime>
#include <iostream>
using namespace std;
class ParkingLot : public Vehicle {
private:
  int max_num;
  Vehicle **vehicles;
  int number;

public:
  ParkingLot() : max_num(0), vehicles(new Vehicle *[max_num]), number(0){};
  ParkingLot(int max_num)
      : max_num(max_num), vehicles(new Vehicle *[max_num]){};
  int getCount() { return number; }
  void parkVehicle(Vehicle *a) {
    if (number < max_num - 1) {
      vehicles[number] = a;
      number++;
    } else {
      cout << "The lot is full" << endl;
    }
  }
  void unparkVehicle(int ID) {
    int panduan = 0;
    for (int i = 0; i < number; i++) {
      if (vehicles[i]->getID() == ID) {
        vehicles[i] = nullptr;
        panduan = 1;
      }
    }
    if (panduan == 0) {
      cout << "Vehicle not in the lot" << endl;
    }
  }
  int coutOverstayingVehicles(int time) {
    int count = 0;
    for (int i = 0; i < number; i++) {
      if (vehicles[i]->getParkingDuration() > time) {
        count++;
      }
    }
    return count;
  }
};

#endif
