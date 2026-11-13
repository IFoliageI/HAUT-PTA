#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	int input[2] = {};

	for (int cycle = 0;cycle < 2;++cycle) cin >> input[cycle];

	for (int cycle = 0; cycle <= input[1] - input[0]; ++cycle) {
			cout << fixed << setprecision(4) << setw(4) << input[0] + cycle;
			cout << fixed << setprecision(4) << setw(8) << log(input[0] + cycle);
			if (cycle != input[1] - input[0]) cout << endl;
		}

	return 0;
}