//#include <iostream>
//#include <math.h>
//#include "basicfunc.h"
//
//int main(){
//	double x, y, b;
//
//	std::cout << "z == ln(b - y) * sqrt(b - x)\n\n";
//	do std::cout << "Print x value: "; while (!inputFunc::input(x));
//	do std::cout << "Print y value: "; while (!inputFunc::input(y));
//	do std::cout << "Print b value: "; while (!inputFunc::input(b));
//
//	if (((b - y) <= 0) && ((b - x) < 0)){
//		std::cout << "\nUnable to calculate function, because logarithm argument is less or equals 0 and radical argument is less than 0.\n";
//		return 0;
//	}
//
//	if ((b - y) <= 0){
//		std::cout << "\nUnable to calculate function, because logarithm argument is less or equals 0.\n";
//		return 0;
//	}
//
//	if ((b - x) < 0){
//		std::cout << "\nUnable to calculate function, because radical argument is less than 0.\n";
//		return 0;
//	}
//
//	std::cout << "\nz == " << log(b - y) * sqrt(b - x) << "\n";
//	return 0;
//}