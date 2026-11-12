#include <iostream>
using namespace std;

int main()
{
	int input[2] = {};

	for (int cycle = 0;cycle < 2;++cycle) {
		cin >> input[cycle];
	}

	if (input[0] > 0 && input[1] > 0) cout << "1";
	else if (input[0] > 0 && input[1] < 0) cout << "4";
	else if (input[1] > 0 && input[0] < 0) cout << "2";
	else if (input[1] < 0 && input[0] < 0) cout << "3";

	return 0;
}