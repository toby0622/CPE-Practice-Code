#include <iostream>
using namespace std;

int main() {
    int b[1005] = {0};
    int n;
    int t = 0;
    int i;
    int j;

    while (cin >> n) {
        int b2 = 0;

        for (i = 1; i <= n; i++) {
            cin >> b[i];

            // condition: not an increasing sequence
            if (b[i] <= b[i - 1]) {
                b2 = 1;
            }
        }

        int note[20005] = {0};

        if (b2 == 0) {
            for (i = 1; i <= n; i++) {
                for (j = i; j <= n; j++) {
                    // condition: the summation value has existed
                    if (note[b[i] + b[j]] != 0) {
                        b2 = 1;
                    }

                    note[b[i] + b[j]] = 1;
                }
            }
        }

        cout << "Case #" << ++t << ": It is ";

        if (!b2) {
            cout << "a B2-Sequence." << endl << endl;
        }

        else {
            cout << "not a B2-Sequence." << endl << endl;
        }
    }
}