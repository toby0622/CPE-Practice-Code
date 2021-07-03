#include <iostream>
#define MAX 999999
using namespace std;

int a[MAX];

// function for derivative calculation
long long int derivative(int x, int max) {
    long long sum = 0;
    long long exp = 1;

    for (int i = max - 1; i >= 0; i--) {
        sum = sum + a[i] * exp * (max - i);
        exp = exp * x;
    }

    return sum;
}

int main() {
    int x;
    int n;

    // input the data
    while (cin >> x) {
        for (n = 0;  ; n++) {
            cin >> a[n];

            if (getchar() == '\n') {
                break;
            }
        }

        // function call
        cout << derivative(x, n) << endl;
    }

    return 0;
}