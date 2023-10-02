//#include <iostream>
//#include <math.h>
//#include "basicfunc.h"
//
//int main(){
//	double a, b, c, d;
//
//	std::cout << "ax2 + bx + c == 0\n\n";
//
//	do std::cout << "Print a value: "; while (!inputFunc::input(a));
//	do std::cout << "Print b value: "; while (!inputFunc::input(b));
//	do std::cout << "Print c value: "; while (!inputFunc::input(c));
//	
//	#pragma region Task3
//
//	if (a == 0){
//		if (b != 0) std::cout << "x == " << ((-c / b) == -0 ? 0 : -c / b);
//		else if (b == 0 && c != 0) std::cout << "Equation has no real roots.";
//		else std::cout << "x in RR";
//		return 0;
//	}
//
//	#pragma endregion
//
//	#pragma region Task4
//
//	d = pow(b, 2) - 4 * a * c;
//
//	if (d > 0) std::cout << " x (1) == " << (-b - sqrt(d)) / 2 * a << "\n"
//		" x (2) == " << (-b + sqrt(d)) / 2 * a << "\n";
//	else if (d == 0) std::cout << "x == " << ((-b / 2 * a) == -0 ? 0 : -b / 2 * a) << "\n";
//	else std::cout << "Equation has no real roots (D == " << d << ")\n";
//
//	#pragma endregion
//
//	return 0;
//}