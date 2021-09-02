#include <iostream>
#define sign(X) ((X) < 0 ? (-1) : (X) > 0 ? 1 : 0)
using namespace std;

int main() {
    int n;
    int sx[105];
    int sy[105];
    int k;
    // calculate the amount difference between positive cherries and negative cherries
    int difference;
    int s;

    // input the number of cherries (2N)
    while (cin >> n && n != 0) {
        // input the cherries xy-coordinates
        for (k = 0; k < 2 * n; k++) {
            cin >> sx[k] >> sy[k];
        }

        // apply exhausted method
        for (int a = (-500); a <= 500; a++) {
            for (int b = (-500); b <= 500; b++) {
                for (difference = k = 0; k < 2 * n; k++) {
                    s = sign(a * sx[k] + b * sy[k]);

                    if (s) {
                        difference = difference + s;
                    } else {
                        difference = 1;
                        break;
                    }
                }

                // difference between positive and negative cherries, skip
                if (difference) {
                    continue;
                }

                // output the final result
                cout << a << " " << b << endl;

                a = b = 1000;
            }
        }
    }

    return 0;
}