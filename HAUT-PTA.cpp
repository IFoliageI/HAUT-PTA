#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double input = 0;
	double output = 0;

	cin >> input;

	output = sqrt(input * input);

	cout << fixed << setprecision(2) << output;

	return 0;
}