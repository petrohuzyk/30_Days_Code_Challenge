#pragma once
#include <string>

using namespace std;

class Character {
    public:
    string base = "character";
    virtual void attack();
    virtual void heal();
    virtual Character * clone() const {
        return new Character(*this);
    }
    virtual string getWeapon();
};