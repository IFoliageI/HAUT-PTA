#include <iostream>
#include <iomanip>
#define Price 50
using namespace std;

int main()
{
	int input = 0;

	cin >> input;

	if (input<30) {
		cout << fixed << setprecision(2) << (double)input * Price;
	}
	else { 
		cout << fixed << setprecision(2) << (double)input * (Price - 2);
	}

	return 0;
}