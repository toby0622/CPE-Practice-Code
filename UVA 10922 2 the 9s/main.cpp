#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    // input the data
    while (cin >> s && s != "0") {
        int v = 0;
        int degree = 1;

        // calculate the sum of digit using ascii code
        for (char k : s) {
            v = v + k - '0';
        }

        // calculate the degree
        while (v % 9 == 0 && v != 9) {
            int sum = 0;

            for ( ; v; v /= 10) {
                sum = sum + (v % 10);
            }

            v = sum;

            degree++;
        }

        // output the final result
        if (v % 9) {
            cout << s << " is not a multiple of 9." << endl;
        } else {
            cout << s << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
        }
    }

    return 0;
}