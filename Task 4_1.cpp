//#include <iostream>
//#include <fstream>
//#include <string>
//
//int main() {
//	const std::string fileName = "somefile.txt";
//	std::ofstream fout(fileName);
//	std::ifstream fin(fileName);
//	int nums[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sum = 0;
//
//	for (int n : nums) 
//		fout << n << " ";
//	fout.close();
//	
//	std::string num;
//	while (fin >> num) 
//		sum += stoi(num);
//	fin.close();
//
//	std::cout << sum << "\n";
//
//	return 0;
//}