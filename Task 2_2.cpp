//#include <iostream>
//#include <math.h>
//#include "basicfunc.h"
//
//int main(){
//	double x, a;
//
//	std::cout << "a * ln|x|, |x| < 1\n\n";
//	do std::cout << "Print a value: "; while (!inputFunc::input(a));
//	do std::cout << "Print x value: "; while (!inputFunc::input(x) || abs(x) >= 1);
//
//	if (x == 0) std::cout << "Impossible to calculate ln|x| because logarithm argument is less or equals 0.\n\n";
//	else std::cout << "\na * ln|x| == " << abs(a * log(abs(x))) << "\n\n";
//
//	std::cout << "sqrt(a - x^2), |x| > 1\n\n";
//	do std::cout << "Print a value: "; while (!inputFunc::input(a));
//	do std::cout << "Print x value: "; while (!inputFunc::input(x) || abs(x) < 1);
//	
//	double secondExpr = a - pow(x, 2);
//	if (secondExpr < 0) {
//		std::cout << "Impossible to calculate sqrt(a - x^2) because radical argument is less than 0.\n";
//		return 0;
//	}
//
//	std::cout << "sqrt(a - x^2) == " << sqrt(a - pow(x, 2)) << "\n";
//
//	return 0;
//}