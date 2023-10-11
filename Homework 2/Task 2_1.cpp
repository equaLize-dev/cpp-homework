#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include "basicfunc.h"

int main(){
	double H, R, r, l;

	std::cout << "V == 1/3 * Pi * H * (R^2 + R * r + r^2)\n";
	std::cout << "S == Pi* (R^2 + (R + r)* l + r^2)\n\n";
	std::cout << "Pi considered as 3.14159\n\n";
	do std::cout << "Print H value: "; while (!inputFunc::input(H));
	do std::cout << "Print l value: "; while (!inputFunc::input(l));
	do std::cout << "Print R value: "; while (!inputFunc::input(R));
	do std::cout << "Print r value: "; while (!inputFunc::input(r));

	double V = (M_PI * H * (pow(R, 2) + R * r + pow(r, 2))) / 3;
	double S = M_PI * (pow(R, 2) + (R + r) * l + pow(r, 2));

	std::cout << "\nV == " << V;
	std::cout << "\nS == " << S << "\n";

	if (V <= 0 || S <= 0 || H <= 0 || R <= 0 || r <= 0 || l <= 0) std::cout << "\nNote: this cone shouldn't exist :)\n";

	return 0;
}