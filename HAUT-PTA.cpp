#define PI 3.14159
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{


	int r = 0;
	cin >> r;

	double l = 2 * PI * r;
	double s = PI * r * r;

	cout << fixed << setprecision(2) << l << " " << s;

	return 0;
}