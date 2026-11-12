#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	double input = 0, rate = 1.0;

	cin >> input;

	if (input >= 5000) rate = 0.8;
	else if (input >= 3000) rate = 0.85;
	else if (input >= 1000) rate = 0.9;
	else if (input >= 500) rate = 0.95;

	cout << fixed << setprecision(2) << input * rate;

	return 0;
}