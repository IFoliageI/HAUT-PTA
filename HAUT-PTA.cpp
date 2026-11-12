#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	double input[3] = {};
	double output[2] = {};

	for (int cycle = 0;cycle < 3;++cycle) {
		cin >> input[cycle];
	}

	output[0] = (-input[1] + sqrt(input[1] * input[1] - (4 * input[0] * input[2]))) / (2 * input[0]);
	output[1] = (-input[1] - sqrt(input[1] * input[1] - (4 * input[0] * input[2]))) / (2 * input[0]);

	cout << fixed << setprecision(2) << setw(7) << setfill(' ') << output[0] << setw(7) << setfill(' ') << output[1];
	return 0;
}