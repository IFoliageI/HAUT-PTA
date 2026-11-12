#include <iostream>
using namespace std;

int main()
{


	int inum1 = 0, inum2 = 0;
	cin >> inum1 >> inum2;

	int Sum = inum1 + inum2;
	int Diff = inum1 - inum2;
	int Prod = inum1 * inum2;
	int Quot = inum1 / inum2;
	int Rem = inum1 % inum2;

	cout << Sum << " " << Diff << " " << Prod << " " << Quot << " " << Rem;

	return 0;
}