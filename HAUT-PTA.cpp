#include <iostream>
using namespace std;

int main()
{
	int input = 0;
	cin >> input;

	int Hun = input / 100;
	int Ten = (input - (Hun * 100)) / 10;
	int Num = (input - (Hun * 100) - (Ten * 10));

	if (input == Hun * Hun * Hun + (Ten * Ten * Ten) + (Num * Num * Num)) cout << "yes";
	else cout << "no";

	return 0;
}