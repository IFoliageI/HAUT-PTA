#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	double input, output;

	cin >> input;

	if (input < -2) output = 7 - 2 * input;
	else if (input >= -2 && input < 3) output = 5 - fabs(3 * input + 2);
	else output = 3 * input + 4;

	cout << output;

	return 0;
}