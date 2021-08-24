#include <iostream>
#include <cmath>
using namespace std;

int greatestCommonDivider(int a, int b, int *x, int *y) {
    int tx;
    int ty;
    int d;

    if (b > a) {
        return greatestCommonDivider(b, a, y, x);
    }

    if (b == 0) {
        *x = 1;
        *y = 0;

        return a;
    }

    d = greatestCommonDivider(b, a % b, &tx, &ty);

    *x = ty;
    *y = tx - floor(a / b) * ty;

    return d;
}

int main() {
    int a;
    int b;
    int x;
    int y;
    int d;

    while (cin >> a >> b) {
        d = greatestCommonDivider(a, b, &x, &y);

        cout << x << " " << y << " " << d << endl;
    }

    return 0;
}