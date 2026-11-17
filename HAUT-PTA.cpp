#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string Input;
	char temp;

	while (cin.get(temp) && temp != '@') Input += tolower(temp);

	for (char Output : Input) {
		if (Output >= 'a' && Output <= 'z') {
			if (Output == 'z') cout << 'a';
			else cout << (char)(Output + 1);
		}
		else cout << Output;
		}

		return 0;
	}