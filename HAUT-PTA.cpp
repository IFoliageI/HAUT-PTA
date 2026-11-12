#include <iostream>
using namespace std;

int main()
{
	int input[2] = {};
	int output[2] = {};

	for (int cycle = 0;cycle < 2;++cycle) {
		cin >> input[cycle];
	}

	if (input[0] < input[1]) {
		output[0] = input[0];
		output[1] = input[1];
	}
	else
	{
		output[0] = input[1];
		output[1] = input[0];
	}

	cout << output[0] << " " << output[1];

	return 0;
}