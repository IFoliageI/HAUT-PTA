#include <iostream>
using namespace std;
int main()
{
	int tree = 0, people = 0;
	int avg = 0, Remainder = 0;
	cin >> tree >> people;
	avg = (tree / people);
	Remainder = (tree % people);
	cout << avg << " " << Remainder;
	return 0;
}