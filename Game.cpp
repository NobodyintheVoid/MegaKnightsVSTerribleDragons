#include "Game.h"
#include <iostream>
#include <typeinfo>
#include <string>

#include "Archer.h"
#include "Calvary.h"
#include "Knights.h"
#include "Dragons.h"
#include "SwordAndShield.h"


Game::Game() {
    Knights Knight;
    Dragons Dragon;
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
            if (RoundsP < 3) {
                if (RoundsP == 3) {
                    std::cout << "К сожалению, у вас закончились священники в отярде, чтобы их использовать." << std::endl;
                }
                if (RoundsP == 2) {
                    std::cout << "Желаете ли вы использовать священника? У вас остался последний священник. Введите ответ словами <да> и <нет>." << std::endl;
                } else {
                    std::cout << "Желаете ли вы использовать священника? У вас осталось ровно " << 5 - RoundsE << " священника. Введите ответ словами <да> и <нет>." << std::endl;
                }
                std::cin >> P;
                if (P == "да" or P == "нет") {
                    std::cout << "Прекрасно";
                    if (P == "да") { RoundsP++;}
                }
            }
            if (NameOfKnight == "SAS") {
                SwordAndShield(P == "да");
            }
            if (NameOfKnight == "A") {
                Archer(P == "да");
            } else {Calvary(P == "да");}
        }
        for (int a = 0; a < 40; a++) {std::cout << "\n";}
        std::cout << "Введите название Дракона, что хотите использовать. Используйте их краткие названия: ледяной - Ice, огненный - Fire, ядовитый - Poison" << std::endl;
        std::string NameOfDragon;
        std::cin >> NameOfDragon;
        if (NameOfDragon == "Ice" or NameOfDragon == "Fire" or NameOfDragon == "Poison") {
            std::string E;
            if (RoundsE < 4) {
                if (RoundsE == 3) {
                    std::cout << "К сожалению, у вас закончились электродраконы в стае, чтобы их использовать." << std::endl;
                }
                if (RoundsE == 2) {
                    std::cout << "Желаете ли вы использовать электродракона? У вас остался последний электродракон. Введите ответ словами <да> и <нет>." << std::endl;
                } else {
                    std::cout << "Желаете ли вы использовать электродракона? У вас осталось ровно " << 5 - RoundsE << " электродракона. Введите ответ словами <да> и <нет>." << std::endl;
                }
                std::cin >> E;
                if (E == "да" or E == "нет") {
                    std::cout << "Прекрасно";
                    if (E == "да") { RoundsE++;}
                }
            }
            if (NameOfDragon == "Ice") {
                IceDragon(E == "да");
            }
            if (NameOfDragon == "Fire") {
                FireDragon(E == "да");
            } else {PoisonDragon(E == "да");}
        }
        std::cout << "Рыцари выбрали " << NameOfKnight << ", а Драконы выбрали " << NameOfDragon << std::endl;
        if (typeid(Dragon).name() == "Ice Dragon") {
            ScoreKnights += Knight.VSIce;
            std::cout << "Тем самым, Рыцари получают " <<  Knight.VSIce << "очков" << std::endl;
        }
        if (typeid(Dragon).name() == "Fire Dragon") {
            ScoreKnights += Knight.VSFire;
            std::cout << "Тем самым, Рыцари получают " <<  Knight.VSFire << "очков" << std::endl;
        } else {
            ScoreKnights += Knight.VSPoison;
            std::cout << "Тем самым, Рыцари получают " <<  Knight.VSPoison << "очков" << std::endl;
        }
        if (typeid(Knight).name() == "Sword and Shield") {
            ScoreDragons += Dragon.VSSAS;
            std::cout << "Тем самым, Драконы получают " <<  Dragon.VSSAS << "очков" << std::endl;
        }
        if (typeid(Knight).name() == "Cavalry") {
            ScoreDragons += Dragon.VSC;
            std::cout << "Тем самым, Драконы получают " <<  Dragon.VSC << "очков" << std::endl;
        } else {
            ScoreDragons += Dragon.VSA;
            std::cout << "Тем самым, Драконы получают " <<  Dragon.VSA << "очков" << std::endl;
        }
        std::cout << "Текущий счет: " << std::endl;
        std::cout << "У Рыцарей" << ScoreKnights << std::endl;
        std::cout << "У Драконов" << ScoreDragons << std::endl;
    }
    if (ScoreKnights > ScoreDragons) {
        std::cout << "По количеству очков побеждают Рыцари. Хотите сыграть еще одну игру? Ответьте <да> или <нет>." << std::endl;
        std::string X;
        std::cin >> X;
        if (X == "да") {Game();}
    }
    if (ScoreKnights < ScoreDragons) {
        std::cout << "По количеству очков побеждают Драконы. Хотите сыграть еще одну игру? Ответьте <да> или <нет>." << std::endl;
        std::string X;
        std::cin >> X;
        if (X == "да") {Game();}
    } else {
        std::cout << "По количеству очков произошла ничья. Хотите сыграть еще одну игру? Ответьте <да> или <нет>." << std::endl;
        std::string X;
        std::cin >> X;
        if (X == "да") {Game();}
    }
}
