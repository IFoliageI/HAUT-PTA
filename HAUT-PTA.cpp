#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double factorial(int n) {
	if (n <= 1) return 1.0;
	return n * factorial(n - 1);
}

int main()
{
	double input = 0, output = 0;

	cin >> input;

	for (int cycle = 0;cycle < 10;++cycle) {
		if (cycle == 0) output = input;
		else output += pow(-1, cycle) * (pow(input, (2 * cycle + 1)) / factorial(2 * cycle + 1));
	}

	cout << fixed << setprecision(3) << output;
	return 0;
}