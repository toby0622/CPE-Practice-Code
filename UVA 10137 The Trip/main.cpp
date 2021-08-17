#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {
        int array[1000] = {};
        int sum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            int y;

            scanf("%d.%d", &x, &y);
            array[i] = x * 100 + y;
            sum = sum + array[i];
        }

        double average = (double) sum / (double) n;
        double different1 = 0;
        double different2 = 0;

        for (int i = 0; i < n; i++) {
            if (average > array[i]) {
                different1 = different1 + floor(average - array[i]);
            } else {
                different2 = different2 + floor(array[i] - average);
            }
        }

        if (different1 > different2) {
            cout << fixed << setprecision(2) << "$" << different1 / 100 << endl;
        } else {
            cout << fixed << setprecision(2) << "$" << different2 / 100 << endl;
        }
    }

    return 0;
}