#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double input[3] = {};
	double output = 0;

	for (int cycle = 0;cycle < 3;++cycle) {
		cin >> input[cycle];
	}
	
	output = (input[0] + input[1] + input[2]) / 3;

	cout << fixed << setprecision(2) << output;

	return 0;
}
