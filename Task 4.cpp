#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float a, b, c, d;
	
	cout << "ax2 + bx + c = 0\n\n";
	cout << "Print a value: ";
	cin >> a;
	cout << "Print b value: ";
	cin >> b;	
	cout << "Print c value: ";
	cin >> c;

	d = pow(b, 2) - 4 * a * c;
	if (a == 0)
	{
		if (b != 0) cout << "x == " << -c / b;
		else if (b == 0 && c != 0) cout << "Equation has no real roots.";
		else cout << "x in RR";
		return 0;
	}

	if (d > 0) cout << " x (1) == " << (-b - sqrt(d)) / 2 * a << "\n"
					   " x (2) == " << (-b + sqrt(d)) / 2 * a << "\n";
	else if (d == 0) cout << "x == " << -b / 2 * a << "\n";
	else cout << "Equation has no real roots (D == " << d << ")\n";

	return 0;
}