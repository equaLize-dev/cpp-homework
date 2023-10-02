//#include <iostream>
//#include <limits.h>
//
//int main() {
//	double A[3][4] = { {5.00, 2.00, 0.00, 10.00}, {3.00, 5.00, 2.00, 5.00}, {20.00, 0.00, 0.00, 0.00} };
//	double B[4][2] = { {1.20, 0.50},  {2.80, 0.40}, {5.00, 1.00}, {2.00, 1.50} };
//	double C[3][2] = { {0.00, 0.00}, {0.00, 0.00}, {0.00, 0.00} };
//
//	for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
//		for (int j = 0; j < sizeof(B[0]) / sizeof(B[0][0]); j++) {
//			for (int k = 0; k < sizeof(A[0]) / sizeof(A[0][0]); k++) {
//				C[i][j] += A[i][k] * B[k][j];
//			}
//		}
//	}
//
//	double maxEarning = DBL_MIN, minEarning = DBL_MAX;
//	double maxFee = DBL_MIN, minFee = DBL_MAX;
//	double totalEarning = 0, totalFee = 0, totalIncome = 0;
//
//	// C[i][0] - column of earnings; C[i][1] - column of fees;
//	
//	for (auto& line : C) {
//		maxEarning = fmax(line[0], maxEarning);
//		minEarning = fmin(line[0], minEarning);
//		totalEarning += line[0];
//		totalIncome += line[0];
//
//		maxFee = fmax(line[1], maxFee);
//		minFee = fmin(line[1], minFee);
//		totalFee += line[1];
//		totalIncome += line[1];
//	}
//
//	std::cout << "Task 1: " << maxEarning << " | " << minEarning << "\n";
//	std::cout << "Task 2: " << maxFee << " | " << minFee << "\n";
//	std::cout << "Task 3: " << totalEarning << "\n";
//	std::cout << "Task 4: " << totalFee << "\n";
//	std::cout << "Task 5: " << totalIncome << "\n";
//
//	return 0;
//}