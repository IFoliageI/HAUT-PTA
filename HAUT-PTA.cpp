#include <iostream>
using namespace std;

int main()
{
	int input;
	int Output = 0;
	int Mid = 1;

	cin >> input;

	for (int cycle = 1; cycle <= input; ++cycle) {
		Mid = Mid * cycle;
		Output = Output + Mid;
	}

	cout << Output;
	return 0;
}