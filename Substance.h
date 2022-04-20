//
// Created by Luke Tascone on 4/13/22.
//

#ifndef LRTASCONE_LAB12B_SUBSTANCE_H
#define LRTASCONE_LAB12B_SUBSTANCE_H

#include <string>
using namespace std;

class Substance
{
private:
    string name;
    double frezPoint;
    double boilPoint;
    double currentTemp;
    double amounAvail;
public:
    Substance(string);
    Substance(string, double, double);
    string getName();
    double getBoilingPoint();
    double getFreezingPoint();
    double getTemp();
    double getAmount();
    void setName(string);
    void setBoilingPoint(double);
    void setFreezingTemp(double);
    void setTemp(double);
    void setAmount(double);
    string getState();
    void coolSubstance(float);
    void heatSubstance(float);
    void increaseAmount(float);
    void decreaseAmount(float);


};


#endif //LRTASCONE_LAB12B_SUBSTANCE_H
