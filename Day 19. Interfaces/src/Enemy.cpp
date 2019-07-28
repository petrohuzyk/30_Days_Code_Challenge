#include "Enemy.hpp"
#include <iostream>

using namespace std;

void Enemy::heal() {
    cout << "The enemy heals himself!" << endl;
}

string Enemy::getWeapon() {
    return Enemy::weapon;
}

void Enemy::attack() {
    cout << "The enemy attacks YOU!" << endl;
}

void Enemy::weaponDrop() {
    cout << "Draw out weapon" << endl;
}