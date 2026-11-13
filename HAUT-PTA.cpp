#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int input[3] = {};
	int output[3] = {};

	for (int cycle = 0;cycle < 3;++cycle) cin >> input[cycle];

	for (int cycle = 0;cycle < 3;++cycle) output[cycle] = fabs(input[cycle]);

	sort(output, output + 3);

	for (int cycle = 0;cycle < 3;++cycle) {
		if (output[2] == fabs(input[cycle]))
		{
			cout << input[cycle];
			break;
		}
	}

	return 0;
}