#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int Output = 1, Input = 0;

	cin >> Input;

	for (double Temp = 0;;++Output) {
		Temp += 1.0 / Output;
		if (Temp > Input) break;
	}

	cout << Output ;

	return 0;
}