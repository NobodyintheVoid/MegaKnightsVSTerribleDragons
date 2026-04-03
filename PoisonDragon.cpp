#include "PoisonDragon.h"

void PoisonDragon::Electro(int& rounds) {
    if (rounds <= 3) {
        VSA = 1;
        rounds++;
    }
}
PoisonDragon::PoisonDragon(bool withElectro) {
    bool IsThereElectro = withElectro;
}