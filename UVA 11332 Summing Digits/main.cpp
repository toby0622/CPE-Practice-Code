#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;

    // input the number value using string
    while (cin >> n && n[0] != '0') {
        string m = n;

        // unit digit
        if (n.size() == 1) {
            cout << n << endl;
        }

        // number more than one digit
        else {
            int result = 0;

            while (true) {
                // add up each digit in the number string
                for (char i : m) {
                    result = result + (i - '0');
                }

                // ending condition: one digit left after calculation
                if (result / 10 == 0) {
                    break;
                }

                // keep the calculation process (more than one digit)
                else {
                    m = to_string(result);
                    result = 0;
                }
            }

            // output the result
            cout << result << endl;
        }
    }

    return 0;
}