#include <iostream>
using namespace std;

int main() {
    // array for recording the fibonacci sequence
    int fibonnaci[40] = {0, 1};

    // create the fibonacci sequence
    for (int k = 2; k < 40; k++) {
        fibonnaci[k] = fibonnaci[k - 1] + fibonnaci[k - 2];
    }

    int n;

    // input the amount of test cases
    cin >> n;

    // for each test case
    while (n--) {
        int m;

        // the data value of the test case
        cin >> m;
        cout << m << " = ";

        // check whether '1' has been displayed or not
        bool preone = false;

        // count from the biggest fib number to 'f(2)'
        for (int k = 39; k >= 2; k--) {
            // condition: 'm' is bigger or equal to the specific fib
            if (m >= fibonnaci[k]) {
                cout << "1";
                m = m - fibonnaci[k];
                preone = true;
            }

            // condition: 'm' is smaller than the specific fib
            // attention: '1' should be already displayed then can output '0'
            else if (preone) {
                cout << "0";
            }
        }

        cout << " (fib)" << endl;
    }

    return 0;
}