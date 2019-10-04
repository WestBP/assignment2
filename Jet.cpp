
// Created by Benjamin West on 10/3/19.


#include "Jet.h"

Jet::Jet() {
    numberOfEngines = 1;
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return NumberOfEngines;
}

void Jet::setNumberOfEngines(numEngines) {
    numberOfEngines=numEngines;

}

double Jet::mileageEstimate(double time) {
    double mileage = 15 * time;
    if (fuelType == "electricity") {
        mileage += mileage * 0.05;
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize();
}