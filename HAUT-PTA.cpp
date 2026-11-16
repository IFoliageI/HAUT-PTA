#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main()
{
	double input = 0;
	cin >> input;

	double output = input;
	double mid = input;

	for (int cycle = 1; cycle < 10; ++cycle) {
		mid = mid * (-input * input) / ((2 * cycle) * (2 * cycle + 1));
		output += mid;
	}

	cout << fixed << setprecision(3) << output;
	return 0;
}