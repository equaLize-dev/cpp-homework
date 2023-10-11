#include <iostream>
#include "basicfunc.h"

int main() {
	int n;
	int sum = 0;
	do std::cout << "Print integer number: "; while (!inputFunc::input(n));

	for (char c : std::to_string(n)) {
		if (c == '-') continue;
		sum += int(c) - 48; // ASCII correction;
	}

	std::cout << sum << "\n";

	return 0;
}