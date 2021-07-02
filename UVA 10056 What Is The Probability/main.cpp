/*
 * the i-th man wins the game at the first round:
 * probability = (1 - p)^(i - 1) * p
 *
 * the i-th man wins the game at the second round:
 * probability = (1 - p)^(n + i - 1) * p
 *
 * the i-th man wins the game at the 'm' round:
 * probability = (1 - p)^(m * n + i - 1) * p
 *
 * total probability:
 * probability = (1 - p)^(i - 1) * p + (1 - p)^(n + i - 1) * p + ...
 *             = [(1 - p)^(i - 1) * p] * [1 + (1 - p)^n + (1 - p)^(2 * n) + ...]
 *             = [(1 - p)^(i - 1) * p] * [1 / 1 - (1 - p)^n]
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int sets;
    int players;
    double successP;
    int winner;
    double answer;

    // input the number of cases
    cin >> sets;

    // calculate each case
    for (int j = 0; j < sets; j++) {
        // input the needed data
        cin >> players >> successP >> winner;

        // condition: probability smaller than requirement
        if (successP < 0.00001) {
            cout << 0.0000 << endl;
        }

        // calculate the result using the above equation
        else {
            answer = pow(1 - successP, winner - 1) * successP / (1 - pow(1 - successP, players));
            // output the final result as required
            cout << fixed << setprecision(4) << answer << endl;
        }
    }

    return 0;
}