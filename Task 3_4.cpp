//#include <iostream>
//#include <fstream>
//#include <string>
//
//int main(){
//	const std::string fileName = "justfile.txt";
//	const std::string nums = "0123456789";
//	std::string line;
//	std::ifstream fin(fileName);
//
//	while (getline(fin, line)){
//		for (char n : line)
//			if (nums.find(n) != std::string::npos)
//				std::cout << n << " ";
//
//		std::cout << "\n";
//	}
//
//    fin.close();
//
//	return 0;
//}