#include <iostream>
using namespace std;

int main() {
	int input = 0;
	int out[1024] = {};
	int len = 0;
	int mid;

	cin >> input;

	mid = input;

	if (mid == 0) out[len++] = 0;
	else {
		while (mid > 0) {
			out[len++] = mid % 10;
			mid /= 10;
		}
	}

	for (int cycle = len - 1; cycle >= 0; --cycle) {
		if (cycle != len - 1) cout << " ";
		cout << out[cycle];
	}

}
