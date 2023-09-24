#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string input;
	float num;

	getline(cin, input);

	try { num = stof(input); }
	catch (invalid_argument)
	{
		cout << "Unable to determine number (maybe your input is not a number?).";
		return 1;
	}

	stringstream ss;
	string checkString;
	ss << num;
	ss >> checkString;

	if (checkString != input)
	{
		cout << "Unable to determine number (maybe your input is not a number?).";
		return 1;
	}

	return 0;
}