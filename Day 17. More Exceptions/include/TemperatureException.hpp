#pragma once
#include <exception>

using namespace std;

class TemperatureException: public exception {

};

class TooHotException: public TemperatureException {

};

class TooColdException: public TemperatureException {

};