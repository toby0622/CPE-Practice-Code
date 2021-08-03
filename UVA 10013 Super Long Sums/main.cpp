#include <iostream>
#include <cstring>
using namespace std;

// two input numbers
int number1[1000005];
int number2[1000005];
// carry out after summing to numbers
int carryOut[1000005];
// result after summing to numbers
int answer[1000005];

int main() {
    int n;
    int m;
    int i;
    int j;

    // input n test cases
    cin >> n;

    // for each test cases
    for (i = 0; i < n; i++) {
        // the length of the big number
        cin >> m;

        // initialize the empty array
        memset(number1, 0, sizeof(number1));
        memset(number2, 0, sizeof(number2));
        memset(carryOut, 0, sizeof(carryOut));
        memset(answer, 0, sizeof(answer));

        // input the big number
        for (j = m - 1; j >= 0; j--) {
            cin >> number1[j] >> number2[j];
        }

        // calculate the needed results
        for (j = 0; j <= m - 1; j++) {
            answer[j] = (carryOut[j] + number1[j] + number2[j]) % 10;
            carryOut[j + 1] = (carryOut[j] + number1[j] + number2[j]) / 10;
        }

        // output requirement: blank
        if (i != 0) {
            cout << endl;
        }

        // output the following results
        if (carryOut[m] != 0) {
            cout << carryOut[m];
        }

        for (j = m - 1; j >= 0; j--) {
            cout << answer[j];
        }

        cout << endl;
    }

    return 0;
}