#include <iostream>
using namespace std;

// find the 'gcd' using Euclidean Algorithm
int greatestCommonDivider(int x, int y) {
    while (x %= y) {
        swap(x, y);
    }

    return y;
}

int main() {
    int ans[502] = {0};
    int n;

    // create the 'gcd' list from 1 to 500
    for (int i = 1; i < 502; i++) {
        ans[i] = ans[i - 1];

        for (int j = 1; j < i; j++) {
            ans[i] = ans[i] + greatestCommonDivider(i, j);
        }
    }

    // output the result base on the list
    while (cin >> n && n != 0) {
        cout << ans[n] << endl;
    }

    return 0;
}