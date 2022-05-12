#ifndef GOLEM_H
#define GOLEM_H

#include "../Monster.h"


class Golem: public Monster {
    private:

    public:
        Golem() : Monster(75, 25) {
            cout << "\nGolem spawned\n";
            name = "Golem";
        }
        void attackPlayer(Player *player) {
            int dmg = 0;

            dmg = rand() % attack + 1;
            cout << "\nGolem used Rock Throw\n";

            player->takeDmg(dmg);
        }
};

#endif