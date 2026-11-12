#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int input[3] = {};
	int output[3] = {};

	for (int cycle = 0;cycle < 3;++cycle) {
		cin >> input[cycle];
	}

	copy(input, input + 3, output);
	sort(output, output + 3);

	cout << output[2];

	return 0;
}