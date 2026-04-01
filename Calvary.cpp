//
// Created by aach on 11.03.2026.
//

#include "Calvary.h"

void Calvary::Priest(int& rounds) {
    if (rounds <= 3) {
        VSIce = 1;
        rounds++;
    }
}

Calvary::Calvary(bool withPriest) {
    bool IsTherePriest = withPriest;
}