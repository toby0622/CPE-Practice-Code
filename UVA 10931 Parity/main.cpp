/*
 * using stack in the question:
 * last input first output
 */

#include <iostream>
#include <stack>
using namespace std;

int main() {
    // a stack in order to record the binary value
    stack<int> binaryStack;
    int n;

    // input the data and check the value
    while (cin >> n && n) {
        int parity = 0;

        // execute the binary division
        while (n) {
            parity = parity + n % 2;
            binaryStack.push(n % 2);
            n = n / 2;
        }

        cout << "The parity of ";

        // output the answer from the stack
        while (binaryStack.size()) {
            cout << binaryStack.top();
            binaryStack.pop();
        }

        cout << " is " << parity << " (mod 2)." << endl;
    }
}