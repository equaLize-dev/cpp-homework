//#include <iostream>
//#include <math.h>
//#include "basicfunc.h"
//
//int main(){
//	double x, a;
//
//	std::cout << "a * ln|x|, |x| < 1\n";
//	std::cout << "sqrt(a - x^2), |x| > 1\n\n";
//	do std::cout << "Print x value (x will be clamped to (0, 1) up to 5 digits after the dot): "; while (!inputFunc::input(x));
//	do std::cout << "Print a value: "; while (!inputFunc::input(a));
//
//	//x will be clamped to (0, 1) up to 5 digits after the dot
//	if (x >= 1 || x <= -1) x = 0.99999;
//	else if (x == 0) x = 0.00001;
//
//	// What about simple log?
//	std::cout << "\na * ln|x| == " << ((a * log(x)) == -0 ? 0 : a * log(x)) << "\n";
//
//	double secondExpr = a - pow(x, 2);
//	if (secondExpr < 0) {
//		std::cout << "Unable to calculate sqrt(a - x^2), because radical argument is less than 0.\n";
//		return 0;
//	}
//
//	std::cout << "sqrt(a - x^2) == " << sqrt(a - pow(x, 2)) << "\n";
//
//	return 0;
//}