#include <iostream>
using namespace std;

int main() {
    int N, M; // number of people in Bones and Blood
    cin >> N >> M;

    int X, Y; // treats per person in Bones and Blood
    cin >> X >> Y;

    int totalTreats = (N * X) + (M * Y);
    cout << totalTreats << endl;

    return 0;
}
