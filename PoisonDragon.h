#ifndef MEGAKNIGHTSVSTERRIBLEDRAGONS_SWORDANDSHIELD_H
#define MEGAKNIGHTSVSTERRIBLEDRAGONS_SWORDANDSHIELD_H
#include "Dragons.h"


class PoisonDragon : public Dragons {
public:
    PoisonDragon() = default;
    PoisonDragon(bool withElectro);
    std::string NameDragon = "Poison Dragon";
    int VSSAS = 0;
    int VSC = -1;
    int VSA = 1;
    void Electro(int& rounds) override;
};

#endif
