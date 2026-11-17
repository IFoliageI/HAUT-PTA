#include <cctype>
#include <iostream>
using namespace std;

int main()
{
	int Count[3] = {};
	char temp;

	for (int cycle = 0;; ++cycle) {
		cin.get(temp);
		if (temp == '\n') break;
		else if (isalnum(temp) && !isalpha(temp)) ++Count[1];
		else if (isalnum(temp) && isalpha(temp)) ++Count[0];
		else if (!isalnum(temp) && !isalpha(temp)) ++Count[2];
	}

	cout << "letter:" << Count[0] << endl;
	cout << "digit:" << Count[1] << endl;
	cout << "other:" << Count[2];

	return 0;
}