#include <iostream>
#include "basicfunc.h"

int main() {
	int n;
	int* ns = NULL;
	do std::cout << "Print natural value: "; while (!inputFunc::input(n) || n <= 0);
	ns = new int[n];
	for (int i = 0; i <= n; i++) {
		ns[i] = i;
	}

	ns[1] = 0; // 1 is not a prime number, so we make it zero, cuz otherwise the algorithm will consider it prime

	// Sieve of Eratosthenes
	int i = 2;
	if (ns != NULL) {
		while (i <= n) {
			if (ns[i] != 0) {
				int j = i * 2;
				while (j <= n) {
					ns[j] = 0;
					j = j + i;
				}
			}

			i += 1;
		}
	}

	for (int i = 0; i < n; i++) {
		if (ns[i] != 0) std::cout << ns[i] << " ";
	}

	return 0;
}