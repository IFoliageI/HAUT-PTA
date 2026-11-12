#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main()
{
	double input[4] = {};
	double output = 0;

	for (int cycle = 0;cycle < 4;++cycle) {
		cin >> input[cycle];
	}


	output = sqrt(((input[2] - input[0]) * (input[2] - input[0])) + ((input[3] - input[1]) * (input[3] - input[1])));

	cout << fixed << setprecision(2) << output;

	return 0;
}