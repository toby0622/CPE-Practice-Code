#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;

    // input the array length
    while (cin >> n) {
        set<int> tank;

        int a;

        // input the first array element
        cin >> a;

        for (int i = 1; i < n; i++) {
            int b;

            // input the second array element
            cin >> b;

            // absolute difference value between 'a' & 'b'
            int d = abs(a - b);

            // insert 'd' into the set if 'd' matched the requirement
            if (d && d < n) {
                tank.insert(d);
            }

            // move the pointer of the array and keep the same process going
            a = b;
        }

        // the set having (n - 1) elements will be jolly
        // because a 'set' only contains unique element
        // which makes 'non-jolly' array easy to find
        if (tank.size() == n - 1) {
            cout << "Jolly";
        } else {
            cout << "Not jolly";
        }

        cout << endl;
    }

    return 0;
}