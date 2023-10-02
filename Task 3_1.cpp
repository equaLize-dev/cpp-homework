//#include <iostream>
//#include <math.h>
//#include "basicfunc.h"
//
//int main(){
//	double S, p, n, r, d;
//
//	std::cout << "m == (S * r * (1 + r)^n) / (12 * ((1 + r)^n - 1)) | m - monthly payment\n\n";
//	do std::cout << "Print S value (Amount of debt, RUB): "; while (!inputFunc::input(S));
//	do std::cout << "Print p value (Amount of payment, % of debt amount): "; while (!inputFunc::input(p));
//	do std::cout << "Print n value (Duration of debt, YEARS): "; while (!inputFunc::input(n));
//
//	r = p / 100;
//	d = (pow((1 + r), n) - 1);
//
//	if (d == 0){
//		std::cout << "\nUnable to calculate m, because denominator == 0.\n";
//		return 0;
//	}
//
//	std::cout << "\nm (monthly payment) == " << (S * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1)) << " RUB\n";
//
//	return 0;
//}