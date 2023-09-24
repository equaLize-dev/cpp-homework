#include <iostream>
#include <string>
using namespace std;

namespace basicFunc
{
	bool safasfasf(float result)
	{
		string input;
		float num;
		
		getline(cin, input);

		try { num = stof(input); }
		catch (invalid_argument)
		{
			cout << "Unable to determine number (maybe your input is not a number?).";
			return false;
		}

		if (to_string(num) != input)
		{
			cout << "Unable to determine number (maybe your input is not a number?).";
			return false;
		}

		result = num;
		return true;
	}
}