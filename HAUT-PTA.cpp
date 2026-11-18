#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int Input = 0, Temp = 0;
	vector<int>Count;
	vector<int>Num;

	cin >> Input;

	Temp = Input;

	Count.resize(Input + 1, 0);

	for (int Cycle = 2; Cycle <= Temp; ++Cycle) {
		if (Temp % Cycle == 0) {
			Num.emplace_back(Cycle);
			while (Temp % Cycle == 0) {
				Temp /= Cycle;
				++Count.at(Cycle);
			}
		}
	}

	bool isFirst = true;
	for (size_t Cycle = 0; Cycle < Num.size(); ++Cycle) {
		int factor = Num.at(Cycle);
		for (int inside_Cycle = 0; inside_Cycle < Count.at(factor); ++inside_Cycle) {
			if (!isFirst) {
				cout << " ";
			}
			cout << factor;
			isFirst = false;
		}
	}

	return 0;
}