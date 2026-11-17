#include <cctype>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<char>Input;
	vector<char>Output;
	int Count = 0;
	char temp;

	for (int cycle = 0;; ++cycle) {
		cin.get(temp);
		Input.emplace_back(tolower(temp));
		if (Input[cycle] == '@') break;
		++Count;
	}

	Output = Input;

	for (int cycle = 0; cycle < Count; ++cycle) {
		if (isalpha(Output.at(cycle)) && Output.at(cycle) != 'z') Output.at(cycle) = (char)(Output.at(cycle) + 1);
		else if (Output.at(cycle) == 'z') Output.at(cycle) = 'a';
	}

	for (int cycle = 0; cycle < Count; ++cycle) {
		cout << Output.at(cycle);
	}

	return 0;
}