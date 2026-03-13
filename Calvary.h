//
// Created by aach on 11.03.2026.
//

#ifndef MEGAKNIGHTSVSTERRIBLEDRAGONS_CALVARY_H
#define MEGAKNIGHTSVSTERRIBLEDRAGONS_CALVARY_H
#include "Knights.h"


class SwordAndShield: public Knights {
    public:
    SwordAndShield() = default;
    std::string NameKnight = "Calvary";
    int VSFire = -1;
    int VSPoison = 1;
    int VSIce = 0;
    void Priest(int &rounds) override;
};


#endif //MEGAKNIGHTSVSTERRIBLEDRAGONS_CALVARY_H