//
// Created by aach on 11.03.2026.
//

#ifndef MEGAKNIGHTSVSTERRIBLEDRAGONS_KNIGHTS_H
#define MEGAKNIGHTSVSTERRIBLEDRAGONS_KNIGHTS_H
#include <string>

class Knights {
public:
    int KnightOrDragon = 0;
    virtual void Priest(int& rounds) = 0;
    int RoundsForPriest = 0;
    std::string NameKnight;
    Knights() = default;
    bool IsTherePriest = false;
    int VSFire;
    int VSIce;
    int VSPoison;
};


#endif //MEGAKNIGHTSVSTERRIBLEDRAGONS_KNIGHTS_H