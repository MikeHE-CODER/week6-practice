#include "Car.h"
#include "Motorbike.h"
#include "Vehicle.h"
#include <ctime>
#include <iostream>
using namespace std;
 ParkingLot:: ParkingLot() : max_num(0), vehicles(new Vehicle *[max_num]), number(0){};
  ParkingLot:: ParkingLot(int max_num)
      : max_num(max_num), vehicles(new Vehicle *[max_num]){};
 ParkingLot::int getCount() { return number; }
 ParkingLot::void parkVehicle(Vehicle *a) {
    if (number < max_num - 1) {
      vehicles[number] = a;
      number++;
    } else {
      cout << "The lot is full" << endl;
    }
  }
 ParkingLot::void unparkVehicle(int ID) {
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
 ParkingLot::int coutOverstayingVehicles(int time) {
    int count = 0;
    for (int i = 0; i < number; i++) {
      if (vehicles[i]->getParkingDuration() > time) {
        count++;
      }
    }
    return count;
  }

