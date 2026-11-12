#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int input[3] = {};
	int output[3] = {};
	char temp;

	for (int cycle = 0;cycle < 3;++cycle) {
		cin >> temp;
		input[cycle] = (int)temp;
	}

	copy(input, input + 3, output);
	sort(output, output + 3);

	cout << (char)output[2];

	return 0;
}