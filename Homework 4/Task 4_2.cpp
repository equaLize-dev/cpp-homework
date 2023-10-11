#include <iostream>
#include "basicfunc.h"

int numberSign(int num){
	if (num == 0) return 0;
	else if (num > 0) return 1;
	else return -1;
}


int main() {
	int num, sign;
	do std::cout << "Print number: "; while (!inputFunc::input(num));
	sign = numberSign(num);
	if (sign == 0) std::cout << "It's zero.\n";
	else if (sign > 0) std::cout << "It's higher than zero.\n";
	else std::cout << "It's lower than zero.\n";
}