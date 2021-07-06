#include <iostream>
using namespace std;

int main() {
    int n;

    // input the number of test cases
    cin >> n;

    // for each test case
    while (n--) {
        int m;

        // input the value need to be encrypt
        cin >> m;

        int b1 = 0;
        int b2 = 0;

        // calculate 'b1'
        for (int v = m; v; v /= 2) {
            b1 = b1 + v % 2;
        }

        // adjust 'm' with decimal
        for ( ; m; m /= 10) {
            // calculate 'b2'
            for (int v = m % 10; v; v /= 2) {
                b2 = b2 + v % 2;
            }
        }

        // output the final result
        cout << b1 << " " << b2 << endl;
    }

    return 0;
}