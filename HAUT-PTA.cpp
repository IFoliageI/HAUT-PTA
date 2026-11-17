#include <cctype>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int Count = 0;
	char temp;

	for (int cycle = 0;; ++cycle) {
		cin.get(temp);
		if (temp == '\n') break;
		if(isalnum(temp)&&!isalpha(temp)) ++Count;
	}

	cout << Count;

	return 0;
}