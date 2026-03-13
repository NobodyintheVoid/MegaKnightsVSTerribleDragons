#include "Game.h";
#include <typeinfo>
#include "Knights.h"
#include "Dragons.h"


Game::Game() {
    Knights Knight;
    Dragons Dragon;
    int Rounds = 0;
    int ScoreKnights = 0;
    int ScoreDragons = 0;
    while (Rounds != 15) {
        Rounds++;
        Knight = Knights();
        Dragon = Dragons();
        if (typeid(Dragon).name() == "Ice Dragon") {
            ScoreKnights += Knight.VSIce;
        }
        if (typeid(Dragon).name() == "Fire Dragon") {
            ScoreKnights += Knight.VSFire;
        } else {
            ScoreKnights += Knight.VSPoison;
        }
        if (typeid(Knight).name() == "Sword and Shield") {
            ScoreDragons += Dragon.VSSAS;
        }
        if (typeid(Knight).name() == "Cavalry") {
            ScoreDragons += Dragon.VSC;
        } else {
            ScoreDragons += Dragon.VSA;
        }
    }
}