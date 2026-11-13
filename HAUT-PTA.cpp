#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	long long input = 0;

	cin >> input;

	long long** output;
	output = new long long* [input + 1];
	long long row, column = 2;
	for (row = 0;row <= input;++row) output[row] = new long long[column];

	for (long long cycle = 0;cycle < input;++cycle) {
		output[cycle][0] = cycle + 1;
		output[cycle][1] = 1;
		for (long long multiply = 1; multiply <= cycle + 1; multiply++) output[cycle][1] = output[cycle][1] * multiply;
	}

	for (long long cycle = 0;cycle < input;++cycle) {
		cout << left << setw(4) << output[cycle][0];
		cout << left << setw(20) << output[cycle][1];
		if (cycle != input - 1) cout << endl;
	}

	for (long long cycle = 0; cycle < row; ++cycle) delete[] output[cycle];
	delete[] output;

	return 0;
}