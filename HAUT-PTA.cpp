#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	int input[2] = {};

	for (int cycle = 0;cycle < 2;++cycle) cin >> input[cycle];

	double **output;
	output = new double* [input[1] - input[0] + 1];
	int row,column = 2;
	for (row = 0;row < (input[1] - input[0] + 1);++row) output[row] = new double[column];

	for (int cycle = 0;cycle < (input[1] - input[0] + 1);++cycle) {
		output[cycle][0] = input[0] + cycle;
		output[cycle][1] = log(input[0] + cycle);
	}
	
	for (int cycle = 0;cycle < (input[1] - input[0] + 1);++cycle) {
		cout << setw(4) << defaultfloat << (int)output[cycle][0];
		cout << setw(8) << fixed << setprecision(4) << output[cycle][1];
		if (cycle != (input[1] - input[0])) cout << endl;
	}

	for (int cycle = 0; cycle < row; ++cycle) delete[] output[cycle];
	delete[] output;

	return 0;
}