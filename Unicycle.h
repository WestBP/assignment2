// Created by Benjamin West on 10/3/19.


#ifndef DRIVINGSIMULATOR_UNICYCLE_H
#define DRIVINGSIMULATOR_UNICYCLE_H

#include "Vehicle.h"

class Unicycle : public Vehicle {

private:
   

public:
    explicit Unicycle(string brand, string model, int userWeight);

    virtual ~Unicycle();
	int getWeight();
    void setWeight(int Weight);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_Unicycle_H
