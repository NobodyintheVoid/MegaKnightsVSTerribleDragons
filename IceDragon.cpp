#include "IceDragon.h"

void IceDragon::Electro(int& rounds) {
    if (rounds <= 3) {
        VSSAS = 1;
        rounds++;
    }
}
IceDragon::IceDragon(bool withElectro) {
    bool IsThereElectro = withElectro;
}