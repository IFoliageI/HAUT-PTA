#include <iostream>
using namespace std;

int main()
{
	int input[5] = {};
	int output[2] = {};

	for (int cycle = 0;cycle < 5;++cycle) {
		cin >> input[cycle];
	}

	int  oriSquare = 2 * (input[0] * input[1] + input[0] * input[2] + input[1] * input[2]);
	int addSquare = 4 * (2 * input[3] * (input[0] - 2 * input[4]) +
	             	2 * input[3] * (input[1] - 2 * input[4]) +
	               	2 * input[3] * (input[2] - 2 * input[4]));
	output[0] = oriSquare + addSquare;

	// 8x d*(a-2e)  8x d*(c-2e)  4x d*(b-2e) --> wrong
	// 8x d*(a-2e)  8x d*(b-2e)  8x d*(c-2e)

	int allSize = input[0] * input[1] * input[2];
	int missSize = 2 * input[3] * (
	              	(input[0] - 2 * input[4]) * (input[1] - 2 * input[4]) +
	              	(input[0] - 2 * input[4]) * (input[2] - 2 * input[4]) +
	              	(input[1] - 2 * input[4]) * (input[2] - 2 * input[4]));
	output[1] = allSize - missSize;

	cout << output[0] << " " << output[1];
	return 0;
}