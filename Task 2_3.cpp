//#include <iostream>
//#include <math.h>
//#include "basicfunc.h"
//using namespace std;
//
//int main()
//{
//	double x, y, b;
//
//	cout << "z == ln(b - y) * sqrt(b - x)\n\n";
//	do cout << "Print x value: "; while (!inputFunc::input(x));
//	do cout << "Print y value: "; while (!inputFunc::input(y));
//	do cout << "Print b value: "; while (!inputFunc::input(b));
//
//	if (((b - y) <= 0) && ((b - x) < 0))
//	{
//		cout << "\nUnable to calculate function, because logarithm argument is less or equals 0 and radical argument is less than 0.\n";
//		return 0;
//	}
//
//	if ((b - y) <= 0)
//	{
//		cout << "\nUnable to calculate function, because logarithm argument is less or equals 0.\n";
//		return 0;
//	}
//
//	if ((b - x) < 0)
//	{
//		cout << "\nUnable to calculate function, because radical argument is less than 0.\n";
//		return 0;
//	}
//
//	cout << "\nz == " << log(b - y) * sqrt(b - x) << "\n";
//	return 0;
//}