#include <iostream>
using namespace std;

int fibonacci[5005][1505];
int digit[5005];

int main() {
    fibonacci[0][0] = 0;
    fibonacci[1][0] = 1;

    for (int i = 2; i < 5001; i++) {
        for (int j = 0; j < 1500; j++) {
            fibonacci[i][j] = fibonacci[i][j] + fibonacci[i - 1][j] + fibonacci[i - 2][j];

            if (fibonacci[i][j] >= 10) {
                fibonacci[i][j + 1] = fibonacci[i][j + 1] + fibonacci[i][j] / 10;
                fibonacci[i][j] = fibonacci[i][j] % 10;
            }
        }

        int d;

        for (d = 1500; fibonacci[i][d] == 0; d--);

        digit[i] = d;
    }

    int n;

    while (cin >> n) {
        cout << "The Fibonacci number for " << n << " is ";

        for (int i = digit[n]; i >= 0; i--) {
            cout << fibonacci[n][i];
        }

        cout << endl;
    }

    return 0;
}