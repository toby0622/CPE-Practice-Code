#include <iostream>
#define MAX 100010
using namespace std;

int main() {
    // an array storing the amount of square numbers of specific value
    int s[MAX] = {};
    int a;
    int b;

    // find the square number in the limited range
    for (int i = 1; i * i < MAX; i++) {
        s[i * i] = 1;
    }

    // accumulate the value to find the
    // total square number of the specific value
    for (int i = 1; i < MAX; i++) {
        s[i] = s[i] + s[i - 1];
    }

    while (cin >> a >> b) {
        // ending condition
        if (a == 0 && b == 0) {
            break;
        }

        // output the final result
        // (upper end total - lower end total)
        cout << s[b] - s[a - 1] << endl;
    }

    return 0;
}