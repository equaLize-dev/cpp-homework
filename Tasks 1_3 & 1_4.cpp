//#include <iostream>
//#include <math.h>
//#include "basicfunc.h"
//using namespace std;
//
//int main()
//{
//	double a, b, c, d;
//
//	cout << "ax2 + bx + c == 0\n\n";
//
//	do cout << "Print a value: "; while (!inputFunc::input(a));
//	do cout << "Print b value: "; while (!inputFunc::input(b));
//	do cout << "Print c value: "; while (!inputFunc::input(c));
//	
//	#pragma region Task3
//
//	if (a == 0)
//	{
//		if (b != 0) cout << "x == " << ((-c / b) == -0 ? 0 : -c / b);
//		else if (b == 0 && c != 0) cout << "Equation has no real roots.";
//		else cout << "x in RR";
//		return 0;
//	}
//
//	#pragma endregion
//
//	#pragma region Task4
//
//	d = pow(b, 2) - 4 * a * c;
//
//	if (d > 0) cout << " x (1) == " << (-b - sqrt(d)) / 2 * a << "\n"
//		" x (2) == " << (-b + sqrt(d)) / 2 * a << "\n";
//	else if (d == 0) cout << "x == " << ((-b / 2 * a) == -0 ? 0 : -b / 2 * a) << "\n";
//	else cout << "Equation has no real roots (D == " << d << ")\n";
//
//	#pragma endregion
//
//	return 0;
//}