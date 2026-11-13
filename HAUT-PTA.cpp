#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int input = 0;
	double output = 0;

	cin >> input;

	for (int cycle = 1;cycle < input + 1;++cycle) 
	{ 
		if (cycle % 2 == 0) output += (double)cycle / ((2 * cycle - 1) * -1);
		else output += (double)cycle / (2 * cycle - 1);
	}

	cout << fixed << setprecision(3) << output;

	return 0;
}