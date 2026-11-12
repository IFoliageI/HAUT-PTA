#include <iostream>
using namespace std;

int main()
{
	int input[2] = {};
	int mid = 0;
	int output[2] = { 0,0 };

	for (int cycle = 0;cycle < 2;++cycle) {
		cin >> input[cycle];
	}

	output[1] = (input[1] - 2 * input[0]) / 2;
	output[0] = input[0] - output[1];

	cout << output[0] << " " << output[1];

	return 0;
}
/*
head=x+y
jio=2x+4y
x=head-y
x=(jio-4y)/2
head-y=(jio-4y)/2
2head+2y=jio
y=(jio-2head)/2
*/