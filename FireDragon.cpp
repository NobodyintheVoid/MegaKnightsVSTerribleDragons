#include "FireDragon.h"

void FireDragon::Electro(int& rounds) {
    if (rounds <= 3) {
        VSC = 1;
        rounds++;
    }
}
FireDragon::FireDragon(bool withElectro) {
    bool IsThereElectro = withElectro;
}