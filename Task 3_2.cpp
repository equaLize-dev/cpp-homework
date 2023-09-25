//#include <iostream>
//#include <math.h>
//#include "basicfunc.h"
//using namespace std;
//
//int main()
//{
//	double S, m, n, d;
//
//	cout << "r == 1/((1 - S/12m)^(-1/n) - 1)\n";
//	cout << "p == r * 100\n\n";
//	do cout << "Print S value (Amount of debt, RUB): "; while (!inputFunc::input(S));
//	do cout << "Print m value (Monthly payment, RUB, m != 0): "; while (!inputFunc::input(m) || m == 0);
//	do cout << "Print n value (Duration of debt, YEARS, n != 0): "; while (!inputFunc::input(n) || n == 0);
//
//	d = (pow((1 - S / (12 * m)), -1 / n) - 1);
//
//	if (d == 0)
//	{
//		cout << "\nUnable to calculate r, because denominator == 0.\n";
//		return 0;
//	}
//
//	cout << "p == " << (1/d)*100 << "%\n";
//	return 0;
//}