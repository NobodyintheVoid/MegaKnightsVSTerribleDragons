//
// Created by aach on 13.03.2026.
//

#include "SwordAndShield.h"

void SwordAndShield::Priest(int& rounds) {
    if (rounds <= 3) {
        VSPoison = 1;
        rounds++;
    }
}