#include <iostream>
#include <ctime>
#include <cstdlib>
#include <ctime>
#include "Enemy.hpp"
#include "Character.hpp"
#include "Hero.hpp"

class StarWars {
    public:
    static Character * summonCharacter() {
        srand(time(0));
        int random_variable = rand();
        if (random_variable % 2 == 0) {
            return new Hero();
        }
        else {
            return new Enemy();
        }
    }
};

int main() {
    Enemy DarthVader = Enemy();
    Hero ObiWanKenobi = Hero();
    DarthVader.attack();
    ObiWanKenobi.attack();
    DarthVader.heal();
    ObiWanKenobi.heal();
    cout << "Enemy weapon: " << DarthVader.getWeapon() << endl;
    cout << "Hero weapon: " << ObiWanKenobi.getWeapon() << endl;
}