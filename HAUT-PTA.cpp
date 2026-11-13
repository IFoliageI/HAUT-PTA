#include <iostream>
using namespace std;

int main()
{
	int input = 0;
	int Output = 0;

	cin >> input;

	int Rows = input;
	int Columns = 2;
	int** output = new int* [Rows];
	for (int row = 0; row < Rows; ++row) output[row] = new int[Columns];

	for (int cycle = 0; cycle < Rows; ++cycle) {
		output[cycle][0] = cycle + 1;
		output[cycle][1] = 1;
		for (int multiply = 1; multiply <= cycle + 1; ++multiply) output[cycle][1] = output[cycle][1] * multiply;
	}
	
	for (int cycle = 0; cycle < Rows; ++cycle) Output += output[cycle][1];

	cout << Output;

	for (int row = 0; row < Rows; ++row) delete[] output[row];
	delete[] output;

	return 0;
}