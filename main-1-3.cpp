#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;
int main() {
  Vehicle *v1[10];
  v1[0] = new Car(10, 1);
  v1[0] = new Car(15, 2);
  v1[0] = new Car(15, 3);
  v1[0] = new Car(20, 4);
  v1[0] = new Car(18, 5);
  v1[1] = new Motorbike(17, 6);
  v1[1] = new Motorbike(17, 7);
  v1[2] = new Bus(19, 8);
  v1[2] = new Bus(19, 9);
  v1[2] = new Bus(19, 10);

  for (int i = 0; i < 3; i++) {
    cout << v1[i]->getParkingDuration() << endl;
  }
  ParkingLot *p1 = new ParkingLot(5);
  p1->parkVehicle(v1[0]);
  p1->parkVehicle(v1[1]);
  p1->parkVehicle(v1[2]);
  p1->parkVehicle(v1[3]);
  p1->parkVehicle(v1[4]);
  p1->parkVehicle(v1[5]);
  p1->parkVehicle(v1[6]);
  p1->parkVehicle(v1[7]);
  p1->parkVehicle(v1[8]);
  cout << p1->countOverstayingVehicles(17) << endl;
}
