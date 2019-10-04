
// Created by Benjamin West on 10/3/19.

#include "Skateboard.h"


Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
	//random double generation from stack overflow
    double cur_mileage= (0.5 - 0.1) * ( (double)rand() / (double)RAND_MAX ) + 0.1;
	double mileage = cur_mileage * time;
    if(time>25)
	{
		if(time<250)
		{
			//random double generation from stack overflow 
			double extra = ((time/3) - 1) * ( (double)rand() / (double)RAND_MAX ) + 1;
			mileage=mileage+extra;
		}
	}
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}