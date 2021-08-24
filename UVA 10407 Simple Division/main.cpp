#include <iostream>
using namespace std;

// function in order to find the greatest common divider of the two numbers
int greatestCommonDivider(int a, int b) {
    while (a %= b) {
        swap(a, b);
    }

    return b;
}

int main() {
    int v[1005];

    while (cin >> v[0] && v[0] != 0) {
        int n = 1;
        int M = v[0];
        int m = v[0];

        while (cin >> v[n] && v[n] != 0) {
            // find the maximum value
            M = max(M, v[n]);
            // find the minimum value
            m = min(m, v[n]);
            n++;
        }

        // initial GCD
        int gcd = M - m;

        for (int k = 0; k < n; k++) {
            gcd = greatestCommonDivider(v[k] - m, gcd);
        }

        // display the final result
        cout << gcd << endl;
    }

    return 0;
}