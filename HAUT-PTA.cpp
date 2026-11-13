#include <iostream>
using namespace std;

int main()
{
	int input[2] = {};
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for (int cycle = 0; cycle < 2; ++cycle) cin >> input[cycle];

	if ((input[0] % 4 == 0 && input[0] % 100 != 0) || (input[0] % 400 == 0)) days[2] = 29;
	
	cout << days[input[1]];

	return 0;
}