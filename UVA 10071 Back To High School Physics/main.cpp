/*
 * physics: uniform accelerated motion
 *
 * v(t) = v(0) + a * t
 *
 * s(t) = v(0) * t + (1 / 2) * a * t^2
 *
 * s(2t) = v(0) * 2 * t + (1 / 2) * a * (2 * t)^2
 *       = 2 * [v(t) - a * t] + 2 * a * t^2
 *       = 2 * v(0) * t
 */

#include <iostream>
using namespace std;

int Displacement(int v, int t) {
    int answer = 2 * v * t;
    return answer;
}

int main() {
    int v;
    int t;

    while (cin >> v >> t) {
        cout << Displacement(v, t) << endl;
    }

    return 0;
}