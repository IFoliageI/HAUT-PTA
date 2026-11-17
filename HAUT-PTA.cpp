#include <iostream>
using namespace std;

int GCD(int mid1, int mid2) {
	while (mid2 != 0) {
		int mid3 = mid1 % mid2;
		mid1 = mid2;
		mid2 = mid3;
	}
	return mid1;
}

int main() {
	int input1 = 0, input2 = 0;
	int GCDresult = 0, LCM = 0;

	cin >> input1 >> input2;

	GCDresult = GCD(input1, input2);
	LCM = input1 / GCDresult * input2;

	cout << GCDresult << " " << LCM;
}
