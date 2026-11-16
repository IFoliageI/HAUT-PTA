#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	double input[2] = {};
	double output = 0;

	cin >> input[0] >> input[1];

	for (int cycle = 0; cycle < input[1]; ++cycle) {
		output += input[0];
		input[0] = sqrt(input[0]);
	}

	cout << fixed << setprecision(2) << output << endl;
	return 0;
}