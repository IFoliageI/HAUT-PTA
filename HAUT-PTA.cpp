#include <iostream>
using namespace std;

int main()
{
    int input[2] = {};
    int EvenSquaredSum = 0;
    int OddCubedSum = 0;

    for (int cycle = 0; cycle < 2; ++cycle) cin >> input[cycle];

    for (int cycle = input[0]; cycle <= input[1]; ++cycle) {
        if (cycle % 2 == 0) EvenSquaredSum += cycle * cycle;
        else OddCubedSum += cycle * cycle * cycle;
    }

    cout << EvenSquaredSum << " " << OddCubedSum;
    return 0;
}