#include <iostream>
using namespace std;

int main()
{


	int input = 0;
	cin >> input;

	int Hun = input / 100 ;
	int Ten = (input - (Hun * 100)) / 10 ;
	int Num = (input - (Hun * 100) - (Ten * 10)) ;

	cout << Num << " " << Ten << " " << Hun;

	return 0;
}