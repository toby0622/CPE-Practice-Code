// exchange the cyclic decimal into the smallest denominator fraction

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <climits>
using namespace std;

int greatestCommonDivider(int i, int j) {
    while (j) {
        // using Euclidean Algorithm
        swap(i %= j, j);
    }

    return abs(i);
}

int main() {
    string s;

    while (cin >> s && s != "0") {
        s = s.substr(0, s.size() - 3).substr(2);

        int ansu;
        int ansd = INT_MAX;
        int n = s.size();

        for (int k = 1; k <= n; k++) {
            int u = atoi(s.c_str()) - atoi(s.substr(0, n - k).c_str());
            int d = pow(10., n) - pow(10., n - k);
            int g = greatestCommonDivider(u, d);

            u /= g;
            d /= g;

            if (d < ansd) {
                ansd = d;
                ansu = u;
            }
        }

        cout << ansu << "/" << ansd << endl;
    }

    return 0;
}