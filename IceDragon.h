#ifndef MEGAKNIGHTSVSTERRIBLEDRAGONS_SWORDANDSHIELD_H
#define MEGAKNIGHTSVSTERRIBLEDRAGONS_SWORDANDSHIELD_H
#include "Dragons.h"


class IceDragon : public Dragons {
public:
    IceDragon() = default;
    IceDragon(bool withElectro);
    std::string NameDragon = "Ice Dragon";
    int VSSAS = 1;
    int VSC = 0;
    int VSA = -1;
    void Electro(int& rounds) override;
};