#include <iostream>
using namespace std;

int main() {
    int n;

    // total number of test cases
    cin >> n;

    // for each test cases
    while (n--) {
        // array for recording the train cabin index
        int train[100] = {};
        // count the swapping times
        int count = 0;
        // the length of the train
        int L;

        cin >> L;

        // input the cabin index
        for (int i = 0; i <= L - 1; i++) {
            cin >> train[i];
        }

        // bubble sort
        for (int i = 0; i <= L - 2; i++) {
            for (int k = 0; k <= (L - i - 2); k++) {
                if (train[k] > train[k + 1]) {
                    swap(train[k], train[k + 1]);
                    count++;
                }
            }
        }

        // output the final result as required
        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }

    return 0;
}