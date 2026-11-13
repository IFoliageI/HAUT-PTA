#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int input[8192] = {};
	int output[8192] = {};

	for (int cycle = 0;cycle < 8192;++cycle) cin >> input[cycle];

	copy(input + 1, input + input[0] + 1, output);
	sort(output, output + input[0]);

	cout << output[input[0] - 1];

	return 0;
}