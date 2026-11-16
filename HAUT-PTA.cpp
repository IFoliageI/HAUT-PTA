#include <iostream>
using namespace std;

int main()
{
	int input[2] = {};
	int mid = 0, output = 0;

	cin >> input[0] >> input[1];

	for (int cycle = 0;cycle < input[0];++cycle) {
		mid = mid * 10 + input[1];
		output += mid;
	}

	cout << output;
	return 0;
}