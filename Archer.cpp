//
// Created by aach on 13.03.2026.
//

#include "Archer.h"

void Archer::Priest(int& rounds) {
    if (rounds <= 3) {
        VSFire = 1;
        rounds++;
    }
}