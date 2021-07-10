// by implementing the sieve method

#include <iostream>
using namespace std;

// hartal cycle for each party
int hartals[100];

int main() {
    int T;
    int N;
    int P;

    cin >> T;

    // for each test case
    while (T--) {
        cin >> N >> P;

        int day[3651];

        // initialize the array ('0' represents no hartal)
        for (int i = 0; i < 3651; i++) {
            day[i] = 0;
        }

        // load in the hartal cycle and mark it in the array 'day'
        for (int i = 0; i < P; i++) {
            cin >> hartals[i];

            for (int j = hartals[i]; j <= N; j += hartals[i]) {
                day[j] = 1;
            }
        }

        int count = 0;

        // calculate the amount of total hartal days
        for (int j = 1; j <= N; j++) {
            // avoid friday and saturday to be counted
            if (j % 7 == 6 || j % 7 == 0) {
                continue;
            }

            if (day[j] == 1) {
                count++;
            }
        }

        // output the final result
        cout << count << endl;
    }

    return 0;
}