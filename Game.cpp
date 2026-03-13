#include "Game.h"
#include <typeinfo>
#include "Knights.h"
#include "Dragons.h"
#include <iostream>


Game Game() {
    Knights Knight;
    Dragons Dragon;
    int Rounds = 0;
    int ScoreKnights = 0;
    int ScoreDragons = 0;
    while (Rounds != 15) {
        Rounds++;
        Knight = Knights("тут нужно что-то вводить по конструктору");
        Dragon = Dragons("тут тоже");
        if (typeid(Dragon).name() == "Ice Dragon") {
            ScoreKnights += Knight.VSIce; ///это подсчет очков с учетом священника, VSIce расчитывается в классе  Рыцарей
        }
        if (typeid(Dragon).name() == "Fire Dragon") {
            ScoreKnights += Knight.VSFire; ///тоже самое
        } else {
            ScoreKnights += Knight.VSPoison;///тоже самое
        }
        if (typeid(Knight).name() == "Sword and Shield") {
            ScoreDragons += Dragon.VSSAS;/// с священником, считается в Драконах
        }
        if (typeid(Knight).name() == "Cavalry") { /// тоже самое
            ScoreDragons += Dragon.VSC;
        } else {
            ScoreDragons += Dragon.VSA; /// тоже самое
        }
    }
}