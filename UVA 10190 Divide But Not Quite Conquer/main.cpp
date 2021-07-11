#include <iostream>
using namespace std;

int main() {
    int n;
    int m;

    // input 'n' and 'm'
    while (cin >> n >> m) {
        // special case: continue
        if (n < 2 || m < 2) {
            cout << "Boring!" << endl;
            continue;
        }

        // a variable for recording 'n'
        int backup = n;

        // simulate the division process
        while (n % m == 0 && n > 1) {
            n = n / m;
        }

        // condition: unable to divide
        if (n != 1) {
            cout << "Boring!" << endl;
        }

        // condition: able to divide exactly
        else {
            n = backup;

            // calculate and output the final result
            while (n % m == 0 && n > 1) {
                cout << n << " ";
                n = n / m;
            }

            cout << "1" << endl;
        }
    }

    return 0;
}