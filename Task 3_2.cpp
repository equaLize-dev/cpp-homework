//#include <iostream>
//#include <math.h>
//#include "basicfunc.h"
//
//int main(){
//	double S, m, n, d;
//
//	// Я сам вывел эту формулу, и она подходит для поиска нужного значения при условии, что результат будет целым.
//	// Однако, в соответствии с условием задания, значение нужно искать брутфорсом, поэтому дальше я реализовал цикл.
//	std::cout << "r == 1/((1 - S/12m)^(-1/n) - 1)\n"; 
//	std::cout << "p == r * 100\n\n";
//	do std::cout << "Print S value (Amount of debt, RUB) S > 0: "; while (!inputFunc::input(S) || S <= 0);
//	do std::cout << "Print m value (Monthly payment, RUB) m > 0: "; while (!inputFunc::input(m) || m <= 0);
//	do std::cout << "Print n value (Duration of debt, YEARS) n > 0: "; while (!inputFunc::input(n) || n <= 0);
//
//	d = (pow((1 - S / (12 * m)), -1 / n) - 1);
//
//	if (d == 0){
//		std::cout << "\nImpossible to calculate r, because denominator ( ((1 - S/12m)^(-1/n) - 1 ) == 0.\n";
//		return 0;
//	}
//
//	std::cout << "p == " << (1/d)*100 << "%\n";
//
//	#pragma region For-loop method
//
//	double r = 1;
//	double res = 0;
//
//	while (abs(m - res) > 0.0001) { // With random user input p can be an infinite fraction, so an accuracy of 5 digits after the period will be sufficient
//		res = (S * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1));
//		
//		if (res > m) r -= 0.0001;
//		else if (res < m) r += 0.0001;
//		else break;
//	}
//
//	std::cout << "p == " << round(r * 10000) / 100 << "%\n"; // Rounding to hundredths of a percent
//
//	#pragma endregion
//
//	return 0;
//}