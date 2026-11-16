#include <iostream>
using namespace std;

int main() {
	int input = 0;
	int mid = 0, output = 1;

	cin >> input;

	for (int cycle = 1;cycle < input;++cycle) {
		output = (output + 1) * 2;
	}

	cout << output;
	return 0;
}