#include <iostream>
#include <cmath>
#define MAX 46341
#define TOTAL 4793
using namespace std;

int numOfPrime = 0;
int checkPrime[MAX];
int prime[TOTAL];

void primeFilter1() {
    int i;
    int j;

    prime[numOfPrime++] = 2;

    int MaxCheckValue = sqrt(46341);

    for (i = 3; i < MaxCheckValue; i += 2) {
        if (checkPrime[i - 1] == 0) {
            prime[numOfPrime++] = i;
        }

        for (j = i * i; j < MAX; j += 2 * i) {
            checkPrime[j - 1] = 1;
        }
    }

    for (i = MaxCheckValue; i < MAX; i += 2) {
        if (checkPrime[i - 1] == 0) {
            prime[numOfPrime++] = i;
        }
    }
}

int primeFilter2(int n) {
    if (n < MAX) {
        return checkPrime[n - 1];
    }

    for (int i = 0; i < numOfPrime && i * i <= n; i++) {
        if (n % prime[i] == 0) {
            return 1;
        }
    }

    return 0;
}

int main() {
    primeFilter1();

    long int L = 0;
    long int U = 0;

    while (cin >> L >> U) {
        long int C1 = 0;
        long int C2 = 0;
        long int D1 = 0;
        long int D2 = 0;
        long int max = 0;
        long int min = MAX + 1;
        long int temp[(U - L + 2)];
        long int i;
        long int j = 0;

        if (L <= 2) {
            temp[j++] = 2;
            L = 3;
        } else if (L % 2 == 0) {
            L++;
        }

        for (i = L; i <= U; i += 2) {
            if (!primeFilter2(i)) {
                temp[j++] = i;
            }
        }

        for (i = 1; i < j; i++) {
            long int value = temp[i] - temp[i - 1];

            if (value < min) {
                min = value;
                C1 = temp[i - 1];
                C2 = temp[i];
            }

            if (value > max) {
                max = value;
                D1 = temp[i - 1];
                D2 = temp[i];
            }
        }

        if (max == 0) {
            cout << "There are no adjacent primes." << endl;
        } else {
            cout << C1 << "," << C2 << " are closest, " << D1 << "," << D2 << " are most distant." << endl;
        }
    }

    return 0;
}