//// Код не защищён от недопустимого ввода. Я мог бы реализовать защиту, но на это ушло бы дополнительное время, которое я не был готов тратить.
//#include <iostream>
//#include <string>
//using std::cin;
//using std::cout;
//using std::cout;
//
//int main() {
//	std::string inputNum;
//	std::string resultNum = "";
//	int base;
//	int newBase;
//
//	cout << "According to the task, only 2-16 bases!\n";
//	cout << "Use '.' for fractions.\n\n";
//	cout << "Print number: ";
//	cin >> inputNum;
//	cout << "Print numeral system base: ";
//	cin >> base;
//	cout << "Print new numeral system base: ";
//	cin >> newBase;
//
//	if (inputNum[0] == '-')
//	{
//		resultNum += '-';
//		inputNum.erase(0, 1);
//	}
//
//	float dec = 0;
//	int periodIndex = inputNum.find(".");
//	int firstPlace = periodIndex == -1 ? inputNum.size() - 1 : periodIndex - 1; // номер разряда первой цифры (нужен для возведения в степень основания сс). Например, для числа 22.2512 это будет 1, а для числа 222512 это будет 5
//	int lastPlace = periodIndex == -1 ? 0 : periodIndex + 1 - inputNum.size(); // номер разряда последней цифры числа. Например, для числа 22.2512 это будет -4, а для числа 222512 это будет 0
//
//	for (int i = 0; i < inputNum.size(); i++) {
//		if (firstPlace < lastPlace) break;
//		int digit;
//		
//		switch (inputNum[i]){
//		case 'A': 
//			digit = 10;
//			break;
//		case 'B':
//			digit = 11;
//			break;
//		case 'C':
//			digit = 12;
//			break;
//		case 'D':
//			digit = 13;
//			break;
//		case 'E':
//			digit = 14;
//			break;
//		case 'F':
//			digit = 15;
//			break;
//		case '.': 
//			continue;
//
//		default:
//			digit = int(inputNum[i]) - 48; // subtract 48 for ASCII correction
//			break;
//		}
//
//		dec += digit * pow(float(base), float(firstPlace));
//		firstPlace--;
//	}
//
//	char buffer[33];
//	_itoa_s(int(dec), buffer, newBase);
//	resultNum += buffer;
//	resultNum += '.';
//
//	// Вычисление достаточного кол-ва разрядов после запятой
//	double fraction = dec - int(dec);
//	for (int i = 0; i <= int(-((log(pow(10, lastPlace)) / 2) / log(newBase))); i++) {
//		resultNum += std::to_string(fraction *= newBase)[0];
//		fraction = fraction - int(fraction);
//	}
//
//	cout << "Result: " << resultNum;
//
//	return 0;
//}