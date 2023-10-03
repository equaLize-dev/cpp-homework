//#include <iostream>
//#include "basicfunc.h"
//
//int main() {
//	int n;
//	int res1 = 0, res2 = 0;
//	int m1 = 37, m2 = 25173;
//	int b1 = 3, b2 = 13849;
//	int c1 = 64, c2 = 65537;
//
//	std::cout << "S_i+1 == (m * S_i + b) % c" << "\n\n";
//	do std::cout << "Length of random number sequence (n > 0): "; while (!inputFunc::input(n) || n <= 0);
//
//
//	std::cout << "\nFirst seed: m == " << m1 << "; b == " << b1 << "; c == " << c1 << "\n";
//	for (int i = 0; i < n; i++) {
//		res1 = (m1 * res1 + b1) % c1;
//		std::cout << "Random number " << i + 1 << " == " << res1 << "\n";
//	}
//
//	std::cout << "\nSecond seed: m == " << m2 << "; b == " << b2 << "; c == " << c2 << "\n";
//	for (int i = 0; i < n; i++) {
//		res2 = (m2 * res2 + b2) % c2;
//		std::cout << "Random number " << i + 1 << " == " << res2 << "\n";
//	}
//
//	return 0;
//}