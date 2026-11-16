#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	double input = 0, output = 0;

	cin >> input;

	for (int cycle = 0; cycle < 5; ++cycle) {
		output = (output + 1000) / (1 + input * 12);
	}

	cout << fixed << setprecision(2) << output;
	return 0;
}