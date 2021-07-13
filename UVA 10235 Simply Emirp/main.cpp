// create a prime list (space rather than time)
// set an array 'c' (c[MAX])
// if c[i] = 0, is prime; if c[i] = 1, not prime

#include <iostream>
#define MAX 1000000
using namespace std;

// initialize the array to '0'
// assume every number to be prime at the beginning
int compose[MAX];

int main() {
    for (int i = 2; i < 1000; i++) {
        if (compose[i]) {
            continue;
        }

        // form the prime list
        // mark those composite numbers
        for (int j = i + i; j < MAX; j += i) {
            compose[j] = 1;
        }
    }

    int number;
    int reverse;

    // input the data
    while (cin >> number) {
        int save = number;

        // find the reverse number of the data
        for (reverse = 0; number; number /= 10) {
            reverse = reverse * 10 + (number % 10);
        }

        // output the result as required
        if (compose[save]) {
            cout << save << " is not prime." << endl;
        } else if (compose[reverse] || save == reverse) {
            cout << save << " is prime." << endl;
        } else {
            cout << save << " is emirp." << endl;
        }
    }

    return 0;
}