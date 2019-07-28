#pragma once
#include "Character.hpp"

class Hero : public Character {
    public:
    string weapon = "The Force";
    void attack();
    void heal();
    string getWeapon();
    virtual Hero * clone() const override {
        return new Hero(*this);
    }
};