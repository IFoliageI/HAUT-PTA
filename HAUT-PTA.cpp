#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> Input;
	vector<int> Output;
	Input.reserve(256);
	Output.reserve(256);
	char temp;

	while (cin.get(temp) && temp != ' ') {
		if (temp >= '0' && temp <= '9') Input.emplace_back(temp - '0');
	}

	Output = Input;

	for (int cycle = 0; cycle <= (int)Output.size() - 1; ++cycle) {
		cout << Output.at(cycle);
		if (cycle != (int)Output.size() - 1) cout << " ";
	}

	return 0;
}