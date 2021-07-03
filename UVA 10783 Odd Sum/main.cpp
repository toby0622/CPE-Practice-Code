#include <iostream>
using namespace std;

int main() {
    int t = 0;
    int id = 0;

    // input total test cases
    cin >> t;

    while (true) {
        int a = 0;
        int b = 0;
        int n;
        int sum;

        // input the range
        cin >> a >> b;

        if (a % 2 == 0) {
            a++;
        }

        if (b % 2 == 0) {
            b--;
        }

        // calculate the amount of odd numbers
        n = (b - a) / 2 + 1;
        // calculate the result using arithmetic progression summation formula
        sum = (a + b) * n / 2;

        id++;

        // output the result in required format
        cout << "Case " << id << ": " << sum << endl;

        if (id == t) {
            break;
        }
    }

    return 0;
}