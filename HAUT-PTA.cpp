#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int input = 0;
    cin >> input;

    long long mid = 1;

    for (int cycle = 1; cycle <= input; ++cycle) {
        mid = mid * cycle;

        cout << left << setw(4) << cycle;
        cout << left << setw(20) << mid;
        if (cycle != input) cout << endl;
    }

    return 0;
}