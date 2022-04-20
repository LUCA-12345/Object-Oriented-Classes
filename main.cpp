//Programmer: Luke Tascone
//Lab12B


#include <iostream>
#include "Substance.h"
using namespace std;

void displaySubstanceInfo(Substance);

int main()
{
    Substance sub1("Ethyl Alcohol", -173, 172);
    Substance sub2("Oxygen", -362, -306);
    Substance sub3("Water", 32, 212);

    cout << "--This program will provide information regarding different substances--" << endl;
    cout << endl;
    cout << "The substances are: " << endl;
    cout << endl;
    displaySubstanceInfo(sub1);
    cout << endl;
    displaySubstanceInfo(sub2);
    cout << endl;
    displaySubstanceInfo(sub3);
    cout << endl;

    int subNum;

    cout << "Which Substance would you like to interact with? " << endl;
    cout << "Substance 1: Ethyl Alcohol" << endl;
    cout << "Substance 2: Oxygen" << endl;
    cout << "Substance 3: Water" << endl;
    cout << "Enter Substance Number: ";
    cin >> subNum;
    cout << endl;

    switch (subNum)
    {
        case(1):
            float sub1HeatBy;
            float sub1CoolBy;
            float sub1IncBy;
            float sub1DecBy;

            cout << "Enter the amount you want to heat Ethyl Alcohol by: ";
            cin >> sub1HeatBy;
            sub1.heatSubstance(sub1HeatBy);
            cout << "Enter the amount you want to cool Ethyl Alcohol by: ";
            cin >> sub1CoolBy;
            sub1.coolSubstance(sub1CoolBy);
            cout << "Enter the amount you want to increase Ethyl Alcohol by: ";
            cin >> sub1IncBy;
            sub1.increaseAmount(sub1IncBy);
            cout << "Enter the amount you want to decrease Ethyl Alcohol by: ";
            cin >> sub1DecBy;
            sub1.decreaseAmount(sub1DecBy);
            cout << endl;

            cout << "After temp and amount changes you've requested" << endl;
            cout << endl;
            displaySubstanceInfo(sub1);

            break;

        case(2):
            float sub2HeatBy;
            float sub2CoolBy;
            float sub2IncBy;
            float sub2DecBy;

            cout << "Enter the amount you want to heat Oxygen by: ";
            cin >> sub2HeatBy;
            sub2.heatSubstance(sub2HeatBy);
            cout << "Enter the amount you want to cool Oxygen by: ";
            cin >> sub2CoolBy;
            sub2.coolSubstance(sub2CoolBy);
            cout << "Enter the amount you want to increase Oxygen by: ";
            cin >> sub2IncBy;
            sub2.increaseAmount(sub2IncBy);
            cout << "Enter the amount you want to decrease Oxygen by: ";
            cin >> sub2DecBy;
            sub2.decreaseAmount(sub2DecBy);
            cout << endl;

            cout << "After temp and amount changes you've requested" << endl;
            cout << endl;
            displaySubstanceInfo(sub2);

            break;
        case(3):
            float sub3HeatBy;
            float sub3CoolBy;
            float sub3IncBy;
            float sub3DecBy;

            cout << "Enter the amount you want to heat Water by: ";
            cin >> sub3HeatBy;
            sub3.heatSubstance(sub3HeatBy);
            cout << "Enter the amount you want to cool Water by: ";
            cin >> sub3CoolBy;
            sub3.coolSubstance(sub3CoolBy);
            cout << "Enter the amount you want to increase Water by: ";
            cin >> sub3IncBy;
            sub3.increaseAmount(sub3IncBy);
            cout << "Enter the amount you want to decrease Water by: ";
            cin >> sub3DecBy;
            sub3.decreaseAmount(sub3DecBy);
            cout << endl;

            cout << "After temp and amount changes you've requested" << endl;
            cout << endl;
            displaySubstanceInfo(sub3);

            break;
        default:
            cout << "You did not select a valid substance number." << endl;
    }

    return 0;
}

void displaySubstanceInfo(Substance sub)
{
    cout << "Name: " << sub.getName() << endl;
    cout << "The Boiling Point is: " << sub.getBoilingPoint() << endl;
    cout << "The Freezing Point is: " << sub.getFreezingPoint() << endl;
    cout << "The Current Temperature is: " << sub.getTemp() << endl;
    cout << "The Current Amount is: " << sub.getAmount() << endl;
    cout << "The Current State is: " << sub.getState() << endl;
}