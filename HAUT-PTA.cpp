#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double input[8192] = {};

	for (int cycle = 0;cycle < 8192;++cycle) cin >> input[cycle];

	for (int cycle = 1;cycle < input[0] + 1;++cycle) if (input[cycle] < 60) ++input[8191];

	cout << fixed << setprecision(2) << input[8191] / input[0];

	return 0;
}