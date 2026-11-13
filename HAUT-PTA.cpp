#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	int input = 0;
	cin >> input;

	int max_num;
	cin >> max_num;

	for (int cycle = 1; cycle < input; ++cycle) {
		int temp;
		cin >> temp;

		if (temp > max_num) max_num = temp;
	}

	cout << max_num;
	return 0;
}