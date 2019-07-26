#include "HotChocolate.hpp"
#include "TemperatureException.hpp"
#include <iostream>

using namespace std;

double HotChocolate::tooHot = 185;
double HotChocolate::tooCold = 160;

void HotChocolate::DrinkHotChocolate(double cocoTemp) {
    if (cocoTemp >= tooHot) {
        throw TooHotException();
    } else if (cocoTemp <= tooCold){
        throw TooColdException();
    }
}