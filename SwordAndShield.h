//
// Created by aach on 13.03.2026.
//

#ifndef MEGAKNIGHTSVSTERRIBLEDRAGONS_SWORDANDSHIELD_H
#define MEGAKNIGHTSVSTERRIBLEDRAGONS_SWORDANDSHIELD_H
#include "Knights.h"


class SwordAndShield: public Knights {
public:
    SwordAndShield() = default;
    std::string NameKnight = "Sword and Shield";
    int VSFire = 1;
    int VSPoison = 0;
    int VSIce = -1;
};


#endif //MEGAKNIGHTSVSTERRIBLEDRAGONS_SWORDANDSHIELD_H