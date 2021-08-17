// find the solution of the simultaneous equations

#include <iostream>
#include <iomanip>
#include <cmath>
#define MIN(X, Y) ((X > Y) ? Y : X)
using namespace std;

int main() {
    double L;
    double W;
    double MaxX;
    double MinX;

    while (cin >> L >> W) {
        MaxX = ((L + W) - sqrt(L * L - L * W + W * W)) / 6.0;
        MinX = MIN(L, W) * 0.5;

        cout << fixed << setprecision(3) << MaxX + (1E-6) << " " << 0.0 << " " << MinX + (1E-6) << endl;
    }

    return 0;
}