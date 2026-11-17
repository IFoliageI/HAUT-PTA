#include <cctype>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int Count = 0, Input = 0, Output = 0;
	char temp;

	for (;;) {
		if (!cin.get(temp)) break;
		if (temp == '\n') break;
		else if (isdigit(temp)) {
			Input = Input * 10 + (temp - '0');
			++Count;
		}
	}

	for (int Cycle = Count - 1; Cycle >= 0;--Cycle) {
		if (Cycle == 0) if (Input % 10 > 4)Output += Input % 10 - 1;
						else Output += Input % 10;
		else if (((Input / (int)pow(10, Cycle)) % 10) > 4)  Output += (Input / (int)pow(10, Cycle) % 10 - 1) * (int)pow(9, Cycle);
		else Output += Input / (int)pow(10, Cycle) % 10 * (int)pow(9, Cycle);

	}

	cout << Output;

	return 0;
}

/******
3->5 1->10 9
13->15 1->20 18
23->25 1->30 27
33->35 1->"40" 36
39->50 1->50 36
...
93->95 1->100 80

	5 -> 35     |( >4)|   5
n = (55/10-1)*9 |(- 1)| + 55%10
******/