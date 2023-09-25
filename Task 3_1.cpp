//#include <iostream>
//#include <math.h>
//#include "basicfunc.h"
//using namespace std;
//
//int main()
//{
//	double S, p, n, r, d;
//
//	cout << "m == (S * r * (1 + r)^n) / (12 * ((1 + r)^n - 1)) | m - monthly payment\n\n";
//	do cout << "Print S value (Amount of debt, RUB): "; while (!inputFunc::input(S));
//	do cout << "Print p value (Amount of payment, % of debt amount): "; while (!inputFunc::input(p));
//	do cout << "Print n value (Duration of debt, YEARS): "; while (!inputFunc::input(n));
//
//	r = p / 100;
//	d = (pow((1 + r), n) - 1);
//
//	if (d == 0)
//	{
//		cout << "\nUnable to calculate m, because denominator == 0.\n";
//		return 0;
//	}
//
//	cout << "\nm (monthly payment) == " << (S * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1)) << " RUB\n";
//
//	return 0;
//}