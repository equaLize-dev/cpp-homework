//#include <iostream>
//#include <string>
//#include <limits>
//
//int main() {
//	std::string input;
//	std::cout << "Print anything: ";
//	std::getline(std::cin, input);
//	input = ' ' + input + ' ';
//
//	int shortestWordL = INT_MAX;
//	int currentWordL = 0;
//	for (char c : input)
//	{
//		if (c != ' ') {
//			currentWordL++;
//			continue;
//		}
//
//		if (currentWordL > 0) {
//			shortestWordL = currentWordL < shortestWordL ? currentWordL : shortestWordL;
//			currentWordL = 0;
//		}
//	}
//
//	std::cout << "Shortest word: " << shortestWordL;
//	return 0;
//}