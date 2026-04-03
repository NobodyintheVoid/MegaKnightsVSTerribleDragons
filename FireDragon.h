#ifndef MEGAKNIGHTSVSTERRIBLEDRAGONS_SWORDANDSHIELD_H
#define MEGAKNIGHTSVSTERRIBLEDRAGONS_SWORDANDSHIELD_H
#include "Dragons.h"


class FireDragon : public Dragons {
public:
    FireDragon() = default;
    FireDragon(bool withElectro);
    std::string NameDragon = "Fire Dragon";
    int VSSAS = -1;
    int VSC = 1;
    int VSA = 0;
    void Electro(int& rounds) override;
};

#endif
