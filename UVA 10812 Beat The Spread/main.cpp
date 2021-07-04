/*
 * Simultaneous Equations:
 *
 * sum = s
 * difference = d
 * first team score = a
 * second team score = b
 * limit condition : a >= b
 *
 * s = a + b
 * d = a - b
 *
 * a = (s + d) / 2
 * b = s - a
 */

#include <iostream>
using namespace std;

int main() {
    long long n;
    long long s;
    long long d;
    long long a;
    long long b;

    // input the amount of test cases
    cin >> n;

    // each test cases
    for (long long i = 0; i < n; i++) {
        // input the sum value and the difference value
        cin >> s >> d;

        a = s + d;

        // since (s + d) will always be twice of score of one of the team,
        // (s + d) will always be a even number, which means that if 'a' is odd,
        // it is not possible to have a solution
        if (a % 2 != 0) {
            cout << "impossible" << endl;
            continue;
        }

        // find the score of the first team
        a = a / 2;
        // calculate the score of the second team
        b = s - a;

        // condition: 'b' should not be a negative number
        if (b < 0) {
            cout << "impossible" << endl;
            continue;
        }

        // output the final result
        cout << a << " " << b << endl;
    }

    return 0;
}