#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

// function for checking whether the number is prime or not
int prime(int p) {
    int i;

    for (i = 2; i * i <= p; i++) {
        if (p % i == 0) {
            return 0;
        }
    }

    return 1;
}

// a table for prime checking
// value '0': not check yet
// value '1': is prime
// value '2': not prime
char t[10000];

int main() {
    int i;
    int a;
    int b;
    int c;
    int num;

    memset(t, 0, sizeof(t));

    while (cin >> a >> b) {
        // the amount of prime
        c = 0;

        for (i = a; i <= b; i++) {
            // condition: current range unchecked
            if (t[i] == 0) {
                num = i * i + i + 41;

                // record the checking result of the number
                if (prime(num)) {
                    t[i] = 1;
                    c++;
                } else {
                    t[i] = 2;
                }
            }

            // condition: current range checked
            else if (t[i] == 1) {
                c++;
            }
        }

        // output the result as required
        cout << fixed << setprecision(2) << ((double) c / (b - a + 1) * 100) + 0.00001 << endl;
    }

    return 0;
}