#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int input[3] = {};
	int sides[3] = {};

	for (int cycle = 0;cycle < 3;++cycle) {
		cin >> input[cycle];
	}

	copy(input, input + 3, sides);
	sort(sides, sides + 3);

	if (sides[2] - sides[0]<sides[1] && sides[0] + sides[1]>sides[2]) cout << "Yes";
	else cout << "No";

	return 0;
}