#pragma once
#include <iostream>
#include <sstream>
#include <string>

namespace inputFunc
{
	/// <summary>
	/// Checks if user input is a valid integer
	/// A.K.A TryParse()
	/// </summary>
	/// <param name="result">Reference to an integer variable to assign the result</param>
	/// <returns>True if input is valid; False if input is not valid</returns>
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

	/// <summary>
	/// Checks if user input is a valid float
	/// A.K.A TryParse()
	/// </summary>
	/// <param name="result">Reference to a float variable to assign the result (result can contain only 5 places after the period)</param>
	/// <returns>True if input is valid; False if input is not valid</returns>
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

	/// <summary>
	/// Checks if user input is a valid double
	/// A.K.A TryParse()
	/// </summary>
	/// <param name="result">Reference to a double variable to assign the result (result can contain only 5 places after the period)</param>
	/// <returns>True if input is valid; False if input is not valid</returns>
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