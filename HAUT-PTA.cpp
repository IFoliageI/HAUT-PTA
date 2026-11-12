#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main()
{
	double input[3] = {};
	double output = 0;

	for (int cycle = 0;cycle < 3;++cycle) {
		cin >> input[cycle];
	}

	//output = sqrt(((input[0] + input[1] + input[2]) / 2) * (((input[0] + input[1] + input[2]) / 2) - input[0]) * (((input[0] + input[1] + input[2]) / 2) - input[1]) * (((input[0] + input[1] + input[2]) / 2) - input[2]));

	for (int cycle = 0;cycle < 3;++cycle) {
		if (cycle == 0) {
			output = (input[0] + input[1] + input[2]) / 2 * (((input[0] + input[1] + input[2]) / 2) - input[cycle]);
		}
		else {
			output = output * (((input[0] + input[1] + input[2]) / 2) - input[cycle]);
		}
	}

	output = sqrt(output);

	cout << fixed << setprecision(2) << output;

	return 0;
}