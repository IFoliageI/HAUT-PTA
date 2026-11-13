#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int input[512] = {};
	int output = 1;

	for (int cycle = 0;cycle < 512;++cycle) cin >> input[cycle];

	for (int cycle = 1;cycle < input[0] + 1;++cycle) {
		if (input[cycle] % 2 != 0) output = output * input[cycle];
	}

	cout << output;

	return 0;
}