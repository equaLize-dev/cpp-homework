#define _USE_MATH_DEFINES
#include <iostream>
#include "basicfunc.h"
#include "cmath"

#pragma region Functions

float aorectangle(float a, float b) { return a * b;}

float aocircle(float r) { return M_PI * pow(r, 2); }

float aotriangle1(float a, float h) { return 0.5 * a * h; }

float aotriangle2(float a, float b) { return 0.5 * a * b; }

float aotriangle3(float a, float b, float alpha) { return 0.5 * a * b * sin(alpha * M_PI / 180); }

float aotriangle4(float a, float b, float c, float R) { 
	if (R == 0) throw std::string("Impossible to calculate S (R == 0).");
	return (a * b * c) / (4 * R); 
}

float aotriangle5(float a, float b, float c, float r) { return r * (a + b + c) / 2; }

float aotriangle6(float a, float alpha, float beta) { 
	if (alpha == 0 && beta == 0) 
		throw std::string("Impossible to calculate S (sin(alpha + beta) == 0).");
	return (pow(a, 2) * sin(alpha * (M_PI / 180)) * sin(beta * (M_PI / 180))) / 2 * sin(alpha * (M_PI / 180) + beta * (M_PI / 180)); 
}

float aotriangle7(float a, float b, float c, float p) {
	float argument = p * (p - a) * (p - b) * (p - c);
	if (argument < 0) 
		throw std::string("Impossible to calculate S (radical argument less than zero).");
	return sqrt(p * (p - a) * (p - b) * (p - c)); 
}

float aotriangle8(float a) { return (sqrt(3) * pow(a, 2)) / 4; }

#pragma endregion

int main() {
	int choice;
	float a, b, c, h, p, r, R, alpha, beta;
	do std::cout << "\"1\" - Rectangle\n\"2\" - Circle\n\"3\" - Triangle\nSelect figure: "; 
	while (!inputFunc::input(choice) || choice < 1 || choice > 3);

	switch (choice){
	case 1:
		std::cout << "\nS == a * b\n";
		do std::cout << "Print a value: "; while (!inputFunc::input(a));
		do std::cout << "Print b value: "; while (!inputFunc::input(b));
		std::cout << "S == " << aorectangle(a, b) << "\n";
		break;

	case 2: 
		std::cout << "\nS == Pi * r^2\n";
		std::cout << "Pi considered as 3.14159265358979323846\n";
		do std::cout << "Print r value: "; while (!inputFunc::input(r));
		std::cout << "S == " << aocircle(r) << "\n";
		break;

	case 3:
		setlocale(LC_ALL, "");
		do std::cout <<
			"\"1\" - S == 0.5 * a * h\n" <<
			"\"2\" - S == 0.5 * a * b (Only for right triangles!)\n" <<
			"\"3\" - S == 0.5 * a * b * sin(alpha)\n" <<
			"\"4\" - S == (a * b * c) / (4 * R) (R - Circumradius)\n" <<
			"\"5\" - S == r * (a + b + c) / 2 (r - Inradius)\n" <<
			"\"6\" - S == (a^2 * sin(alpha) * sin(beta)) / (2 * sin(alpha + beta))\n" <<
			"\"7\" - S == sqrt(p * (p - a) * (p - b) * (p - c)) (p - Semiperimeter)\n" <<
			"\"8\" - S == (sqrt(3) * a^2) / 4 (Only for regular triangles!)\n" <<
			"Select formula : ";
		while (!inputFunc::input(choice) || choice < 1 || choice > 8);

		switch (choice){
		case 1:
			std::cout << "\nS == 0.5 * a * h\n";
			do std::cout << "Print a value: "; while (!inputFunc::input(a));
			do std::cout << "Print h value: "; while (!inputFunc::input(h));
			std::cout << "S == " << aotriangle1(a, h) << "\n";
			break;
		
		case 2:
			std::cout << "\nS == 0.5 * a * b (Only for right triangles!)\n";
			do std::cout << "Print a value: "; while (!inputFunc::input(a));
			do std::cout << "Print b value: "; while (!inputFunc::input(b));
			std::cout << "S == " << aotriangle2(a, b) << "\n";
			break;
		
		case 3:
			std::cout << "\nS == 0.5 * a * b * sin(alpha)\n";
			do std::cout << "Print a value: "; while (!inputFunc::input(a));
			do std::cout << "Print b value: "; while (!inputFunc::input(b));
			do std::cout << "Print alpha value (in degrees): "; while (!inputFunc::input(alpha));
			std::cout << "S == " << aotriangle3(a, b, alpha) << "\n";
			break;
		
		case 4:
			std::cout << "\nS == (a * b * c) / (4 * R) (R - Circumradius)\n";
			do std::cout << "Print a value: "; while (!inputFunc::input(a));
			do std::cout << "Print b value: "; while (!inputFunc::input(b));
			do std::cout << "Print c value: "; while (!inputFunc::input(c));
			do std::cout << "Print R value: "; while (!inputFunc::input(R));
			std::cout << "S == " << aotriangle4(a, b, c, R) << "\n";
			break;

		case 5:
			std::cout << "\nS == r * (a + b + c) / 2 (r - Inradius)\n";
			do std::cout << "Print a value: "; while (!inputFunc::input(a));
			do std::cout << "Print b value: "; while (!inputFunc::input(b));
			do std::cout << "Print c value: "; while (!inputFunc::input(c));
			do std::cout << "Print r value: "; while (!inputFunc::input(r));
			std::cout << "S == " << aotriangle5(a, b, c, r) << "\n";
			break;

		case 6:
			std::cout << "\nS == (a^2 * sin(alpha) * sin(beta)) / (2 * sin(alpha + beta))\n";
			do std::cout << "Print a value: "; while (!inputFunc::input(a));
			do std::cout << "Print alpha value (in degrees): "; while (!inputFunc::input(alpha));
			do std::cout << "Print beta value (in degrees): "; while (!inputFunc::input(beta));
			std::cout << "S == " << aotriangle6(a, alpha, beta) << "\n";
			break;

		case 7:
			std::cout << "\nS == sqrt(p * (p - a) * (p - b) * (p - c)) (p - Semiperimeter)\n";
			do std::cout << "Print a value: "; while (!inputFunc::input(a));
			do std::cout << "Print b value: "; while (!inputFunc::input(b));
			do std::cout << "Print c value: "; while (!inputFunc::input(c));
			do std::cout << "Print p value: "; while (!inputFunc::input(p));
			std::cout << "S == " << aotriangle7(a, b, c, p) << "\n";
			break;

		case 8:
			std::cout << "\nS == (sqrt(3) * a^2) / 4 (Only for regular triangles!)\n";
			do std::cout << "Print a value: "; while (!inputFunc::input(a));
			std::cout << "S == " << aotriangle8(a) << "\n";
			break;

		default:
			break;
		}
		break;
	}
}