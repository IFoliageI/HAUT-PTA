#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int Input = 0;
	int OutList[3] = {};

	vector<int> rooster;
	vector<int> hen;
	vector<int> chick;

	/*
	5*rooster+3*hen+1/3*chick=Input
	rooster+hen+chick=Input
	OutList 与 3*vec.size() 在计算逻辑中自增
	*/

	/***
	用两层循环枚举 rooster（公鸡）和 hen（母鸡）的数量。
	公鸡最多能买 Input / 5 只。
	母鸡最多能买 Input / 3 只。

	小鸡的数量通过 chick = Input - rooster - hen 算出来，这样能天然满足“数量约束”。
	***/

	cin >> Input;

	/****
	for (int roosterCycle = Input / 5;roosterCycle > 0;--roosterCycle) {
		for (int henCycle = Input - rooster.at(roosterCycle) * 5;roosterCycle > 0;--henCycle) {
			for (int chickCycle = 0;chick.at(henCycle) = Input - rooster.at(roosterCycle) - hen.at(henCycle);++chickCycle) {
				chick.at(henCycle) = Input - rooster.at(roosterCycle) - hen.at(henCycle);
				chick.emplace_back(henCycle);
				++OutList[2];
			}
			hen.emplace_back(henCycle);
			++OutList[1];
		}
		rooster.emplace_back(roosterCycle);
		++OutList[0];
	}
	****/
	for (int roosterCycle = 0; roosterCycle <= Input / 5; ++roosterCycle) {
		for (int henCycle = 0; henCycle <= Input / 3; ++henCycle) {
			int chickCycle = Input - roosterCycle - henCycle;

			if (chickCycle >= 0 && 5 * roosterCycle + 3 * henCycle + chickCycle / 3 == Input && chickCycle % 3 == 0) {
				rooster.push_back(roosterCycle);
				hen.push_back(henCycle);
				chick.push_back(chickCycle);
			}
		}
	}

	if (!rooster.empty()) {
		for (size_t Cycle = 0; Cycle < rooster.size(); ++Cycle) {
			cout << setw(4) << rooster.at(Cycle)
				 << setw(4) << hen.at(Cycle)
				 << setw(4) << chick.at(Cycle);

			if (Cycle != rooster.size() - 1) cout << endl;
		}
	}
	else {
		cout << "No Answer";
	}

	return 0;
}