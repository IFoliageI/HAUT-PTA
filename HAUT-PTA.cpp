#include <iostream>
using namespace std;

int main()
{
	int input[2] = {};
	for (int cycle = 0; cycle < 2; ++cycle) cin >> input[cycle];

	int rows = input[1] - input[0] + 1;
	int cols = 2;
	int** output = new int* [rows];
	for (int row = 0; row < rows; ++row) output[row] = new int[cols];

	for (int cycle = 0; cycle < rows; ++cycle) {
		int num = input[0] + cycle;
		output[cycle][0] = num;
		if (num % 2 == 0) output[cycle][1] = num * num;
		else output[cycle][1] = num * num * num;
	}

	int EvenSquaredSum = 0;
	int OddCubedSum = 0;
	for (int cycle = 0; cycle < rows; ++cycle) {
		if (output[cycle][0] % 2 == 0) {
			EvenSquaredSum += output[cycle][1];
		}
		else {
			OddCubedSum += output[cycle][1];
		}
	}

	cout << EvenSquaredSum << " " << OddCubedSum;

	for (int row = 0; row < rows; ++row) delete[] output[row];
	delete[] output;

	return 0;
}