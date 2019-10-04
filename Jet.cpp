
// Created by Benjamin West on 10/3/19.


#include "Jet.h"

Jet::Jet() {
    numberOfEngines = 1;
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, int numEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int numEngines) {
    numberOfEngines = numEngines;

}

double Jet::mileageEstimate(double time) {
   
	int cur_mileage = std::rand() % (100 + 1 - 40) + 40;
	
	double mileage = cur_mileage * time;
    if (fuelType == "Rocket") 
	{
        if(numberOfEngines>2)
		{
		mileage += mileage * (0.055*numberOfEngines);
		}
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           to_string(getNumberOfEngines());
}