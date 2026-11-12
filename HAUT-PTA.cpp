#define PI 3.14159
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double input[2] = {};
	double output = 0;

	for (int cycle = 0;cycle < 2;++cycle) {
		cin >> input[cycle];
	}

	output = 2 * PI * input[0] * input[1] + 2 * PI * input[0] * input[0];

	cout << fixed << setprecision(2) << output;

	return 0;
}