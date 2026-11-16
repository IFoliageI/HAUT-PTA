#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> Input;
	char temp;

	while (cin.get(temp) && temp != ' ') {
		if (temp >= '0' && temp <= '9') Input.push_back(temp - '0');
	}

	for (int cycle = (int) Input.size() - 1; cycle >= 0; --cycle) {
		cout << Input.at(cycle);
		if (cycle != 0) cout << " ";
	}

	return 0;
}