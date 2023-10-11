#include <iostream>
int main(){
	bool lampState, curtainsState, daytimeState;
	
	std::cout << "Lamp is on? (1/0): "; 
	std::cin >> lampState;
	if (lampState) {
		std::cout << "Room is bright.\n";
		return 0;
	}

	std::cout << "Curtains is open? (1/0): ";
	std::cin >> curtainsState;
	
	if (!curtainsState) {
		std::cout << "Room is dark.\n";
		return 0;
	}

	std::cout << "Is it day? (1/0): ";
	std::cin >> daytimeState;

	if (daytimeState) 
		std::cout << "Room is bright.\n";
	else 
		std::cout << "Room is dark.\n";

	return 0;
}