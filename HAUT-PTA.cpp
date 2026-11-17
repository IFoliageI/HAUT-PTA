#include <iostream>

using namespace std;

int DirectionCalculate(int oriDirection, int Command) {
    int Direction = 0;
    if (Command == 2) Direction = (oriDirection + 1) % 4;
    if (Command == 1) Direction = (oriDirection + 3) % 4;
    if (Command == 3) Direction = oriDirection;
    return Direction;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Input[2] = {}, Location[2] = {}, Time[3] = {};
    int deltaTime = 0, deltaDistance = 0;
    int Direction = 0;

    for (int Cycle = 0;;++Cycle)
    {
        cin >> Input[0] >> Input[1];

        if (Cycle != 0)Time[0] = Time[1];
        Time[1] = Input[0];

        deltaTime = Time[1] - Time[0];

        deltaDistance = deltaTime * 10;

        if (Direction == 0) Location[1] += deltaDistance;
        else if (Direction == 2) Location[1] -= deltaDistance;
        else if (Direction == 3) Location[0] += deltaDistance;
        else if (Direction == 1) Location[0] -= deltaDistance;

        Direction = DirectionCalculate(Direction, Input[1]);

        if (Input[1] == 3) break;
    }
    cout << -Location[0] << " " << Location[1];

    return 0;
}