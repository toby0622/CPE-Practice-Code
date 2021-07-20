#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // input (known) points
    double x[4];
    double y[4];
    // answer (unknown) point
    double xa;
    double ya;

    // for each test case
    while (cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3]) {
        // condition 1: point '0' equal to point '2'
        if (x[0] == x[2] && y[0] == y[2]) {
            xa = x[3] + x[1] - x[2];
            ya = y[3] + y[1] - y[2];
        }

        // condition 2: point '1' equal to point '2'
        else if (x[1] == x[2] && y[1] == y[2]) {
            xa = x[3] + x[0] - x[2];
            ya = y[3] + y[0] - y[2];
        }

        // condition 3: point '0' equal to point '3'
        else if (x[0] == x[3] && y[0] == y[3]) {
            xa = x[2] + x[1] - x[3];
            ya = y[2] + y[1] - y[3];
        }

        // condition 4: point '1' equal to point '3'
        else {
            xa = x[2] + x[0] - x[3];
            ya = y[2] + y[0] - y[3];
        }

        // output the final result as required
        cout << fixed << setprecision(3) << xa << " " << ya << endl;
    }

    return 0;
}