#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int input = 0;
	double output = 0;

	cin >> input;

	for (int cycle = 1;cycle < input + 1;++cycle) output += (double)1 / (2 * cycle - 1);

	cout << fixed << setprecision(2) << output;

	return 0;
}