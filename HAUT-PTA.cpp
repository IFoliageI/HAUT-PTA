#include <iostream>
using namespace std;

int main()
{
	int input[3] = {};
	int mid = 0;
	int output = 0;

	for (int cycle = 0;cycle < 3;++cycle) {
		cin >> input[cycle];
	}

	mid = (input[1] - input[0]) / input[2] + 1;

	output = mid * (input[0] + input[1]) / 2;

	cout << output;

	return 0;
}