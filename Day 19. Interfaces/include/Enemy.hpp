#pragma once
#include "Character.hpp"
#include <string>

using namespace std;

class Enemy: public Character {
    public:
    string weapon = "lightsaber";
    void attack();
    void heal();
    string getWeapon();
    void weaponDrop();
    virtual Enemy * clone() const override {
        return new Enemy(*this);
    }
};