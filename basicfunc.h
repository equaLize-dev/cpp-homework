#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

namespace inputFunc
{
	bool input(int& result)
	{
		string input;
		int num = 0;

		getline(cin, input);

		try { num = stoi(input); }
		catch (invalid_argument)
		{
			cout << "Unable to determine number (maybe your input is not a number?).\n";
			return false;
		}

		stringstream ss;
		string checkString;
		ss << num;
		ss >> checkString;

		if (checkString != input)
		{
			cout << "Unable to determine number (maybe your input is not a number?).\n";
			return false;
		}

		result = num;
		return true;
	}

	bool input(float& result)
	{
		string input;
		float num = 0;

		getline(cin, input);

		try { num = stof(input); }
		catch (invalid_argument)
		{
			cout << "Unable to determine number (maybe your input is not a number?).\n";
			return false;
		}

		stringstream ss;
		string checkString;
		ss << num;
		ss >> checkString;

		if (checkString != input)
		{
			cout << "Unable to determine number (maybe your input is not a number?).\n";
			return false;
		}

		result = num;
		return true;
	}

	bool input(double& result)
	{
		string input;
		double num = 0;

		getline(cin, input);

		try { num = stod(input); }
		catch (invalid_argument)
		{
			cout << "Unable to determine number (maybe your input is not a number?).\n";
			return false;
		}

		stringstream ss;
		string checkString;
		ss << num;
		ss >> checkString;

		if (checkString != input)
		{
			cout << "Unable to determine number (maybe your input is not a number?).\n";
			return false;
		}

		result = num;
		return true;
	}
}