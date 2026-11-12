#include <iostream>
#include <iomanip>
#define Base 1500
using namespace std;

int main()
{
	double input = 0;

	cin >> input;

	if (input <= 10000) cout << fixed << setprecision(2) << Base + input * 0.05;
	else if (10000 < input && input <= 50000) cout << fixed << setprecision(2) << Base + (10000 * 0.05) + ((input - 10000) * 0.03);
	else if (input > 50000) cout << fixed << setprecision(2) << Base + (10000 * 0.05) + (40000 * 0.03) + ((input - 50000) * 0.02);

	return 0;
}