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
//	bool sequence = false;
//	while (getline(fin, line)){
//		for (char n : line)
//			if (nums.find(n) != std::string::npos) {
//				std::cout << n;
//				sequence = true;
//			}
//				
//			else {
//				if (sequence)
//					std::cout << " ";
//				
//				sequence = false;
//			}
//
//		std::cout << "\n";
//	}
//
//    fin.close();
//
//	return 0;
//}