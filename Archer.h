//
// Created by aach on 13.03.2026.
//

#ifndef MEGAKNIGHTSVSTERRIBLEDRAGONS_ARCHER_H
#define MEGAKNIGHTSVSTERRIBLEDRAGONS_ARCHER_H
#include "Knights.h"

class Archer: public Knights {
public:
    Archer() = default;
    std::string NameKnight = "Archer";
    int VSFire = 0;
    int VSPoison = -1;
    int VSIce = 1;
};


#endif //MEGAKNIGHTSVSTERRIBLEDRAGONS_ARCHER_H