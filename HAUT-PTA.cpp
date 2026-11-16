#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
	int Input[1000] = {};
	int Count = 0, Output[1000] = {};

	for (int cycle = 0;;++cycle) {
		cin >> Input[cycle];
		++Count;
		if (Input[cycle] < 0) break;
	}

	copy(Input, Input + (Count - 1), Output);
	sort(Output, Output + (Count - 1));

	cout << Output[Count - 2];

	return 0;
}