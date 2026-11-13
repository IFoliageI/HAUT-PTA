#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int input[512] = {};
	int output[3] = {};

	for (int cycle = 0;cycle < 512;++cycle) cin >> input[cycle];

	for (int cycle = 1;cycle < input[0] + 1;++cycle) {
		if (input[cycle] < 0) ++output[0];
		else if (input[cycle] == 0) ++output[1];
		else if (input[cycle] > 0) ++output[2];
	}

	cout << output[0] << " " << output[1] << " " << output[2];

	return 0;
}