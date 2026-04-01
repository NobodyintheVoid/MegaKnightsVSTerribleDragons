#include "Game.h"
#include <iostream>
#include <typeinfo>
#include <string>
#include "Knights.h"
#include "Dragons.h"


Game::Game() {
    Knights Knight;
    Dragons Dragon;
    int Rounds = 0;
    int RoundsP = 0;
    int RoundsE = 0;
    int ScoreKnights = 0;
    int ScoreDragons = 0;
    while (Rounds != 15) {
        Rounds++;
        std::cout << "Введите название Рыцаря, что хотите использовать. Используйте их краткие названия: Меч и Щит - SAS, Лучник - A, Кавалерия - C" << std::endl;
        std::string NameOfKnight;
        std::cin >> NameOfKnight;
        if (NameOfKnight == "SAS" or NameOfKnight == "A" or NameOfKnight == "C") {
            std::string P;
            if (RoundsP < 5) {
                std::cout << "Желаете ли вы использовать священника? У вас осталось ровно " << 5 - RoundsP << "Введите ответ словами <да> и <нет>." << std::endl;
/// тут косметический ремонт нужен <-

                std::cin >> P;
                if (P == "да" or P == "нет") {
                    std::cout << "Прекрасно";
                    if (P == "да") { RoundsP++;}
                }
            }
            Knight = Knights(NameOfKnight, P=="да");
        }
        for (int a = 0; a < 40; a++) {std::cout << "\n";}
        std::cout << "Введите название Дракона, что хотите использовать. Используйте их краткие названия: ледяной - Ice, огненный - Fire, ядовитый - Poison" << std::endl;
        std::string NameOfDragon;
        std::cin >> NameOfDragon;
        if (NameOfDragon == "SAS" or NameOfDragon == "A" or NameOfDragon == "C") {
            std::string E;
            if (RoundsE < 5) {
                std::cout << "Желаете ли вы использовать священника? У вас осталось ровно " << 5 - RoundsE << "Введите ответ словами <да> и <нет>." << std::endl;
                /// тут косметический ремонт нужен <-

                std::cin >> E;
                if (E == "да" or E == "нет") {
                    std::cout << "Прекрасно";
                    if (E == "да") { RoundsE++;}
                }
            }
            Dragon = Dragons(NameOfDragon, E=="да");
        }
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