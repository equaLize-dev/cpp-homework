//#include <iostream>
//#include <math.h>
//#include "basicfunc.h"
//using namespace std;
//
//int main()
//{
//	const float Pi = 3.14159;
//	double H, R, r, l;
//
//	cout << "V == 1/3 * Pi * H * (R^2 + R * r + r^2)\n";
//	cout << "S == Pi* (R^2 + (R + r)* l + r^2)\n\n";
//	cout << "Pi considered as 3.14159\n\n";
//
//	do cout << "Print H value: "; while (!inputFunc::input(H));
//	do cout << "Print l value: "; while (!inputFunc::input(l));
//	do cout << "Print R value: "; while (!inputFunc::input(R));
//	do cout << "Print r value: "; while (!inputFunc::input(r));
//
//	double V = (Pi * H * (pow(R, 2) + R * r + pow(r, 2))) / 3;
//	double S = Pi * (pow(R, 2) + (R + r) * l + pow(r, 2));
//
//	cout << "\nV == " << V;
//	cout << "\nS == " << S << "\n";
//
//	if (V <= 0 || S <= 0 || H <= 0 || R <= 0 || r <= 0 || l <= 0) cout << "\nNote: this cone shouldn't exist :)\n";
//
//	return 0;
//}