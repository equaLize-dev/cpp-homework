#include <iostream>
#include "basicfunc.h"

int main() {
	int firstNum, secondNum;
	int mx, mn, res;
	do std::cout << "Print first number: "; while (!inputFunc::input(firstNum));
	do std::cout << "Print second number: "; while (!inputFunc::input(secondNum));

	firstNum > secondNum ? (mx = firstNum, mn = secondNum) : (mn = firstNum, mx = secondNum);

	int remainder;
	while (mx > 1) {
		remainder = mx % mn;
		if (remainder == 0) {
			std::cout << "Result: " << mn << "\n";
			break;
		}

		mx = mx % mn;
	}

	//int diff;
	//while (mx > 1) {
	//	diff = mx - mn;
	//	if (diff == 0) {
	//		std::cout << "Result: " << mx << "\n";
	//		break;
	//	}

	//	mx = diff;
	//}

	return 0;
}