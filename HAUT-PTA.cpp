#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char input;
	cin >> input;

	if (isupper(input)) cout << "upper";
	else if (islower(input)) cout << "lower";
	else if (isdigit(input)) cout << "digit";
	else cout << "other";

	return 0;
}