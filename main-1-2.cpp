#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;
int main() {
  Vehicle *v1[3];
  v1[0] = new Car(1);
  v1[1] = new Motorbike(2);
  v1[2] = new Bus(3);
  for (int i = 0; i < 3; i++) {
    cout << v1[i]->getParkingDuration() << endl;
  }
  ParkingLot *p1 = new ParkingLot(3);
  p1->parkVehicle(v1[0]);
  p1->parkVehicle(v1[1]);
  p1->unparkVehicle(3);
}
