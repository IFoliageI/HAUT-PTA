#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int input[2] = {};
	int Output = 0;

	cin >> input[0] >> input[1];

	Output = input[0] + (input[0] - 1) / (input[1] - 1);

	cout << Output;

	return 0;
}