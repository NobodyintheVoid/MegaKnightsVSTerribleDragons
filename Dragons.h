#ifndef MEGAKNIGHTSVSTERRIBLEDRAGONS_DRAGONS_H
#define MEGAKNIGHTSVSTERRIBLEDRAGONS_DRAGONS_H
#include <string>

class Dragons {
public:
    int KnightOrDragon = 1;
    virtual void Electro(int& rounds) = 0;
    int RoundsForElectro = 0;
    std::string NameDragon;
    Dragons() = default;
    bool IsThereElectro = false;
    int VSA;
    int VSSAS;
    int VSC;
};
