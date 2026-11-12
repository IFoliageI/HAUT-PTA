#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int input[3] = {};
	int output[64] = {};

	for (int cycle = 0;cycle < 3;++cycle) {
		cin >> input[cycle];
	}

	/*
	output[0] = input[0];
	output[1] = input[0] * input[0];
	output[2] = input[0] * input[0] * input[0];

	output[3] = input[1];
	output[4] = input[1] * input[1];
	output[5] = input[1] * input[1] * input[1];

	output[6] = input[2];
	output[7] = input[2] * input[2];
	output[8] = input[2] * input[2] * input[2];
	*/
	for (int cycle = 0; cycle < 3; ++cycle) {
		output[cycle * 3] = input[cycle];
		output[cycle * 3 + 1] = input[cycle] * input[cycle];
		output[cycle * 3 + 2] = input[cycle] * input[cycle] * input[cycle];
	}

	for (int cycle = 0;cycle < 9;++cycle) {
		cout << left << setw(9) << setfill(' ') << output[cycle];
		if ((cycle + 1) % 3 == 0 && cycle + 1 != 9) {
			cout << endl;
		}
	}
	return 0;
}