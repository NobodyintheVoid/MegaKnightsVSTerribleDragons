#ifndef MEGAKNIGHTSVSTERRIBLEDRAGONS_KNIGHTS_H
#define MEGAKNIGHTSVSTERRIBLEDRAGONS_KNIGHTS_H
#include <string>

class Dragons {
public:
    int KnightOrDragon1 = 0;
    virtual void Electro(int& rounds) = 0;
    int RoundsForElectro = 0;
    std::string NameDragon;
    Dragons() = default;
    bool IsThereDragon = false;
    int VSA;
    int VSSAS;
    int VSC;
};
