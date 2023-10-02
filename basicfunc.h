#pragma once
#include <iostream>
#include <sstream>
#include <string>

namespace inputFunc
{
	bool input(int& result){
		std::string input;
		int num = 0;

		getline(std::cin, input);

		try { num = stoi(input); }
		catch (std::invalid_argument) {
			std::cout << "Unable to determine number (maybe your input is not a number?).\n";
			return false;
		}

		std::stringstream ss;
		std::string checkString;
		ss << num;
		ss >> checkString;

		if (checkString != input) {
			std::cout << "Unable to determine number (maybe your input is not a number?).\n";
			return false;
		}

		result = num;
		return true;
	}

	// Only 5 numbers after the period
	bool input(float& result){
		std::string input;
		float num = 0;

		getline(std::cin, input);

		try { num = stof(input); }
		catch (std::invalid_argument) {
			std::cout << "Unable to determine number (maybe your input is not a number?).\n";
			return false;
		}

		std::stringstream ss;
		std::string checkString;
		ss << num;
		ss >> checkString;

		if (checkString != input) {
			std::cout << "Unable to determine number (maybe your input is not a number?).\n";
			return false;
		}

		result = num;
		return true;
	}

	// Only 5 numbers after the period
	bool input(double& result){
		std::string input;
		double num = 0;

		getline(std::cin, input);

		try { num = stod(input); }
		catch (std::invalid_argument) {
			std::cout << "Unable to determine number (maybe your input is not a number?).\n";
			return false;
		}

		std::stringstream ss;
		std::string checkString;
		ss << num;
		ss >> checkString;

		if (checkString != input) {
			std::cout << "Unable to determine number (maybe your input is not a number?).\n";
			return false;
		}

		result = num;
		return true;
	}
}