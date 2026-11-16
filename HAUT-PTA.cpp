#include <iostream>

using namespace std;

bool isPrime(int input) {

	if (input < 2) return false;

	for (int cycle = 2; cycle * cycle <= input; ++cycle) {
		if (input % cycle == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	int input = 0;

	cin >> input;

	if (isPrime(input)) cout << "Yes";
	else cout << "No";
}