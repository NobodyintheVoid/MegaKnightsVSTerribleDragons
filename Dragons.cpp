#include "Dragons.h"
#include <cmath>
#include <iostream>
#include <string>
#include <list>
using namespace std;

Dragons::Dragons():Game() {
	VSA1 = 0;
	VSC1 = 0;
	VSSAS1 = 0;
}


int Dragons::VSA(string NameOfKnight, string NameOfDragon) {
	int VSA1 = 0;
	if (NameOfKnight == "A") {
		if (NameOfDragon == "Ice") {
			VSA1 = -1;
		}
		if (NameOfDragon == "Fire") {
			VSA1 = 0;
		}
		if (NameOfDragon == "Poison") {
			VSA1 = 1;
		}
	}
	return VSA1;
}

int Dragons::VSSAS(string NameOfKnight, string NameOfDragon) {
	int VSSAS1 = 0;
	if (NameOfKnight == "SAS") {
		if (NameOfDragon == "Ice") {
			VSSAS1 = 1;
		}
		if (NameOfDragon == "Fire") {
			VSSAS1 = -1;
		}
		if (NameOfDragon == "Poison") {
			VSSAS1 = 0;
		}
	}
	return VSSAS1;
}

int Dragons::VSC(string NameOfKnight, string NameOfDragon) {
	int VSC1 = 0;
	if (NameOfKnight == "C") {
		if (NameOfDragon == "Ice") {
			VSC1 = 0;
		}
		if (NameOfDragon == "Fire") {
			VSC1 = 1;
		}
		if (NameOfDragon == "Poison") {
			VSC1 = -1;
		}
	}
	return VSC1;
}

int Dragons::withE(string E, string P, int VSA, int VSC, int VSSAS) {
	if ((E == "да") && (P == "нет")) {
		if (VSSAS == 0) { VSSAS = 1; }
		if (VSA == 0) { VSA = 1; }
		if (VSC == 0) { VSC = 1; }
	}
}

