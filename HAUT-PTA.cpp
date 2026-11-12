#include <iostream>
#include <iomanip>
#define Cover 6.5573
using namespace std;

int main()
{
	double input = 0;
	double output = 0;

	cin >> input;

	output = Cover * input;

	cout << fixed << setprecision(2) << output;

	return 0;
}
