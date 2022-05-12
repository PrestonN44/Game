#ifndef GOBLIN_H
#define GOBLIN_H

#include "../Monster.h"


class Goblin: public Monster {
    private:

    public:
        Goblin() : Monster(50, 50) {
            cout << "\nGoblin spawned\n";
            name = "Goblin";
        }
        void attackPlayer(Player *player) {
            int dmg = 0;

            dmg = rand() % attack + 1;
            cout << "\nGoblin used Club Smash\n";

            player->takeDmg(dmg);
        }
};

#endif