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

	output = input[1];

	for (int cycle = 0; cycle < input[0]; ++cycle) {
		output = output + output * 0.0225;
	}

	cout << fixed << setprecision(6) << output;
	return 0;
}