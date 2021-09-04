#include <iostream>
using namespace std;

int main() {
    int c;

    // input the number of test cases
    cin >> c;

    while (c--) {
        int len;
        int n;

        // input the pole length and the number of ants
        cin >> len >> n;

        int m = (-100);
        int M = (-100);

        for (int i = 0; i < n; i++) {
            int location;

            // input the starting location of the ant
            cin >> location;

            // find out the result
            M = max(M, max(location, len - location));
            m = max(m, min(location, len - location));
        }

        // output the result
        cout << m << " " << M << endl;
    }

    return 0;
}