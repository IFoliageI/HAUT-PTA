#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int Input[3] = {};
	int Output = 1, Accumulate = 0;

	cin >> Input[0] >> Input[1] >> Input[2];

	for (;;++Output) {
		Accumulate += Input[1];
		if (Accumulate > Input[0]) break;
		else Accumulate -= Input[2];
	}

	cout << Output - 1;

	return 0;
}