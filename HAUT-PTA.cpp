#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char letter;
	cin >> letter;
	cout << (char)toupper(letter);

	return 0;
}