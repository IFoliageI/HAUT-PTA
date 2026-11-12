#include <iostream>
using namespace std;

int main()
{
	int input = 0;

	cin >> input;

	int mid = (int)sqrt(input * input);

	if (mid%2==0) {
		cout << "even" << endl;
	}
	else { 
		cout << "odd" << endl;
	}

	return 0;
}