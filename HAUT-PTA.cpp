#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char letter;
	cin >> letter;
	cout << toupper(letter) - 64;

	return 0;
}