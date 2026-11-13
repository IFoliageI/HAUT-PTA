#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int input[8192] = {};
	int output = 0;

	for (int cycle = 0;cycle < 8192;++cycle) cin >> input[cycle];

	for (int cycle = 1;cycle < input[0] + 1;++cycle) output += input[cycle];

	cout << output;

	return 0;
}