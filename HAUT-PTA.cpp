#include <iostream>

using namespace std;

long long factorial(int input) {
	if (input <= 1) return 1.0;
	return input * factorial(input - 1);
}

int main() {
	int input = 0, output = 1;
	long long mid = 0;

	cin >> input;

	for (;;++output) {
		mid += factorial(output);
		if (mid >= input) break;
	}

	cout << "m<=" << output - 1;
}