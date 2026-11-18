#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int Input[2] = {};

	vector<int> man;
	vector<int> woman;
	vector<int> child;

	cin >> Input[0] >> Input[1];

	for (int womanCycle = 0; womanCycle <= Input[1] / 2 && womanCycle < Input[0]; ++womanCycle) {
		for (int childCycle = 0; Input[0] - womanCycle > 0 && childCycle <= (Input[1] - 2 * womanCycle); ++childCycle) {
			int manCycle = Input[0] - womanCycle - childCycle;

			if (manCycle >= 0 && childCycle + 2 * womanCycle + manCycle * 3 == Input[1] && childCycle + womanCycle + manCycle == Input[0]) {
				man.push_back(manCycle);
				woman.push_back(womanCycle);
				child.push_back(childCycle);
			}
		}
	}

	if (!man.empty()) {
		for (int Cycle = (int)man.size() - 1; Cycle >= 0; --Cycle) {
			cout << man.at(Cycle) << " " << woman.at(Cycle) << " " << child.at(Cycle);

			if (Cycle != 0) cout << endl;
		}
	}
	else {
		cout << "No answer";
	}

	return 0;
}

/****
内层循环上限过大：用了 childCycle <= (Input[1] - 2 * womanCycle)（花费上限）。但因为总人数限制，小孩最多只能是 Input[0] - womanCycle。用人数上限作为边界，能大幅减少无效运算。

条件冗余：既然已经设定 manCycle = Input[0] - womanCycle - childCycle，那么“人数总和等于 Input[0]”这个条件天然成立了，不需要在 if 里重复写。
****/

/******
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int Input[2] = {};

	vector<int> man;
	vector<int> woman;
	vector<int> child;

	cin >> Input[0] >> Input[1]; // Input[0]是人数n，Input[1]是总花费cost

	// 枚举女人数量：最多不超过 n/2 且受花费限制
	for (int womanCycle = 0; womanCycle <= Input[1] / 2 && womanCycle <= Input[0]; ++womanCycle) {
		// 枚举小孩数量：上限受“人数减去女人”和“花费减去女人花费”双重限制
		for (int childCycle = 0; childCycle <= Input[0] - womanCycle; ++childCycle) {

			// 直接推算出男人数量
			int manCycle = Input[0] - womanCycle - childCycle;

			// 判断条件：只需要判断花费是否相等即可，人数天然相等
			if (manCycle >= 0 && 3 * manCycle + 2 * womanCycle + 1 * childCycle == Input[1]) {
				man.push_back(manCycle);
				woman.push_back(womanCycle);
				child.push_back(childCycle);
			}
		}
	}

	if (!man.empty()) {
		// 正序输出即可
		for (size_t Cycle = 0; Cycle < man.size(); ++Cycle) {
			cout << man[Cycle] << " " << woman[Cycle] << " " << child[Cycle];
			if (Cycle != man.size() - 1) cout << endl;
		}
	}
	else {
		cout << "No answer"; // 注意大小写
	}

	return 0;
}
******/

/**********
💡 进阶思路：数学推导（一层循环搞定）
其实这道题根本不需要两层循环。根据题意列出方程：

m + w + c = n （总人数）

3m + 2w + c = cost （总花费）

用式 2 减去式 1，可以消去小孩 c：
2m + w = cost - n
所以可以直接得出：w = cost - n - 2m。

只需要枚举男人的数量 m，直接算出女人 w，再算出小孩 c 即可。这样不仅代码更短，时间复杂度也从O(n^2)降到了O(n)：

#include <iostream>
using namespace std;

int main() {
	int n, cost;
	cin >> n >> cost;
	bool hasAnswer = false;

	// 男人最多 n/3 个
	for (int m = 0; m <= n; ++m) {
		int w = cost - n - 2 * m; // 由数学推导得出
		int c = n - m - w;        // 剩余为小孩

		// 必须保证各人数都非负
		if (w >= 0 && c >= 0) {
			cout << m << " " << w << " " << c << endl;
			hasAnswer = true;
		}
	}

	if (!hasAnswer) {
		cout << "No answer" << endl;
	}
	return 0;
}
**********/