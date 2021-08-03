#include <iostream>
using namespace std;

// results of factorial sum from 1 to 1000
int answer[1005];
int product[3005] = {1};

int main() {
    for (int n = 1; n <= 1000; n++) {
        for (int k = 0; k < 3000; k++) {
            product[k] = product[k] * n;
        }

        // execute the carry out process
        for (int k = 0; k < 3000; k++) {
            product[k + 1] = product[k + 1] + product[k] / 10;
            product[k] = product[k] % 10;
        }

        // sum the digits
        for (int k = 0; k < 3000; k++) {
            answer[n] = answer[n] + product[k];
        }
    }

    int n;

    // output the final result based on the given input
    while (cin >> n) {
        cout << answer[n] << endl;
    }

    return 0;
}