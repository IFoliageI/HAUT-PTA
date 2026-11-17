#include <cctype>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	int Num = 0, Output = 0;

	cin >> Num;

	int* Input = NULL;
	Input = new int[Num];

	for (int Cycle = 0;Cycle < Num;++Cycle) cin >> Input[Cycle];
	for (int Cycle = 0;Cycle < Num;++Cycle) Output += Input[Cycle] * (int)pow(2, Num - 1 - Cycle);

	cout << Output;

	return 0;
}