#include "Hero.hpp"
#include <iostream>

using namespace std;

void Hero::attack() {
    cout << "Hero attacs the emeny!" << endl;
}

string Hero::getWeapon() {
    return Hero::weapon;
}

void Hero::heal() {
    cout << "The hero heals himself" << endl;
}