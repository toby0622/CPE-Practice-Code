#include <iostream>
using namespace std;

int main() {
    int n;

    // input the number of test cases
    cin >> n;

    // for each test case
    for (int i = 1; i <= n; i++) {
        int x1;
        int y1;
        int x2;
        int y2;

        // input the starting point and the ending point
        cin >> x1 >> y1 >> x2 >> y2;

        int pos1;
        int pos2;

        // calculate the distance from (0, 0) to starting point
        pos1 = (x1 + y1 + 1) * (x1 + y1) / 2 + x1;
        // calculate the distance from (0, 0) to ending point
        pos2 = (x2 + y2 + 1) * (x2 + y2) / 2 + x2;

        // output the final result
        cout << "Case " << i << ": " << pos2 - pos1 << endl;
    }

    return 0;
}