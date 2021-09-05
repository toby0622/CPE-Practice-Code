#include <iostream>
using namespace std;

int functionF(int i, long long int *sum) {
    if (i == 0) {
        return 0;
    } else if ((i % 10) > 0) {
        *sum += (i % 10);
    } else {
        functionF((i / 10), sum);
    }

    return 0;
}

int main() {
    long int p = 0;
    long int q = 0;

    while (cin >> p >> q && p >= 0 && q >= 0) {
        int i;
        long long int sum = 0;

        while ((q - p) > 10) {
            if (p % 10 != 0) {
                for (i = p % 10; i < 10; i++) {
                    functionF(i, &sum);
                }

                p += (10 - p % 10);
            }

            if (q % 10 != 0) {
                for (i = q % 10; i > 0; i--) {
                    functionF(i, &sum);
                }

                q -= q % 10;
            }

            if ((q - p) > 10) {
                sum += (q - p) / 10 * 45;
                p /= 10;
                q /= 10;
            }
        }

        for (i = p; i <= q; i++) {
            functionF(i, &sum);
        }

        cout << sum << endl;
    }

    return 0;
}