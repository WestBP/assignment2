
// Created by Benjamin West on 10/3/19.


#include "Unicycle.h"


Unicycle::Unicycle(string brand, string model, int userWeight) {
    setBrand(brand);
    setModel(model);
    setWeight(userWeight);
}

Unicycle::~Unicycle() = default;

int Unicycle::getWeight() {
    return riderWeight;
}

void Unicycle::setWeight(int Weight) {
    riderWeight = Weight;
}

double Unicycle::mileageEstimate(double time) {
    double mileage = 1 * time;
    mileage += mileage - (Weight * 0.5);
    return mileage;
}

string Unicycle::toString() {
    string s = "-> Unicycle\n\t";
    return "-> Unicycle\n" + Vehicle::toString() + "\n\tRider Weight: " +
           to_string(riderWeight);
}