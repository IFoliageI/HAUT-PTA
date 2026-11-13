#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	double s1, s2;
	char op;

	cin >> s1 >> op >> s2;

	switch (op) {
	case '+':
		cout << fixed << setprecision(2) << s1 + s2;
		break;

	case '-':
		cout << fixed << setprecision(2) << s1 - s2;
		break;

	case '*':
		cout << fixed << setprecision(2) << s1 * s2;
		break;

	case '/':
		if (fabs(s2) < 1e-10) {cout << "Wrong input!";}
		else {cout << fixed << setprecision(2) << s1 / s2;}
		break;

	default:
		cout << "Wrong input!";
		break;
	}
	return 0;
}