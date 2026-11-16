#include <iostream>
using namespace std;

int main() {
	int input = 0, output = 0;
	int mid[2] = { 1,1 };

	cin >> input;

	if (input == 1 || input == 2) {
		output = 1;
	}
	else {
		for (int cycle = 3; cycle <= input; ++cycle) {
			output = mid[0] + mid[1];
			mid[0] = mid[1];
			mid[1] = output;
		}
	}

	cout << output;

	return 0;
}