

#include "Substance.h"
using namespace std;

Substance::Substance(string tempName)
{
    name = tempName;
    frezPoint = 0;
    boilPoint = 0;
    currentTemp = 0;
    amounAvail = 0;
}
Substance::Substance(string tempName, double tempFrezPoint, double tempBoilPoint)
{
    name = tempName;
    frezPoint = tempFrezPoint;
    boilPoint = tempBoilPoint;
    currentTemp = 0;
    amounAvail = 0;
}
string Substance::getName()
{
    return name;
}
double Substance::getBoilingPoint()
{
    return boilPoint;
}
double Substance::getFreezingPoint()
{
    return frezPoint;
}
double Substance::getTemp()
{
    return currentTemp;
}
double Substance::getAmount()
{
    return amounAvail;
}
void Substance::setName(string tempName)
{
    name = tempName;
}
void Substance::setBoilingPoint(double tempBoilPoint)
{
    boilPoint = tempBoilPoint;
}
void Substance::setFreezingTemp(double tempFrezPoint)
{
    frezPoint = tempFrezPoint;
}
void Substance::setTemp(double tempTemp)
{
    currentTemp = tempTemp;
}
void Substance::setAmount(double tempAmount)
{
    amounAvail = tempAmount;
}
string Substance::getState()
{
    if (currentTemp > frezPoint && currentTemp < boilPoint)
    {
        return "normal";
    }
    else if (currentTemp <= frezPoint )
    {
        return "frozen";
    }
    else
    {
        return "boiling";
    }

}
void Substance::coolSubstance(float coolBy)
{
    currentTemp -= coolBy;
}
void Substance::heatSubstance(float heatBy)
{
    currentTemp += heatBy;
}
void Substance::increaseAmount(float incBy)
{
    amounAvail += incBy;
}
void Substance::decreaseAmount(float decBy)
{
    amounAvail -= decBy;
}
