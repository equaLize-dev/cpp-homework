//#include <iostream>
//#include <string>
//
//int main() {
//	std::string input;
//	std::cout << "Print anything: ";
//	std::getline(std::cin, input);
//
//	int maxSequence = 0;
//	int currentSequence = 0;
//	for (char c : input)
//	{
//		if (c == ' ') currentSequence++;
//		maxSequence = currentSequence > maxSequence ? currentSequence : maxSequence;
//	}
//
//	std::cout << "Max ' ' sequence: " << maxSequence;
//	return 0;
//}