#ifndef DRAGONS_DRAGONS_H
#define DRAGONS_DRAGONS_H
#include <string>
#include <list>


#include <Game.h>
#include <iostream>
using namespace std;

class Dragons : public Game
{
public:
	int VSA1;
	int VSC1;
	int VSSAS1;
	Dragons();
	int Dragons::VSA(string E, string P, string NameOfKnight, string NameOfDragon);
	int Dragons::VSSAS(string E, string P, string NameOfKnight, string NameOfDragon);
	int Dragons::VSC(string E, string P, string NameOfKnight, string NameOfDragon);
	int withE(string E, string P, int VSA, int VSC, int VSSAS);
};


#endif