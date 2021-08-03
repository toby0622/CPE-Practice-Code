// simulate the process of product calculation that executes with pen and paper

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string operator*(string &a, string &b) {
    // reverse the input number strings
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    // exchange the string into actual number
    for (char & k : a) {
        k = k - '0';
    }
    for (char & k : b) {
        k = k - '0';
    }

    // create an answer string and set up the space and its initial value
    string c(a.size() + b.size(), 0);

    // whole calculation process
    for (int k = 0; k < a.size(); k++) {
        // product
        for (int h = 0; h < b.size(); h++) {
            c[k + h] = c[k + h] + a[k] * b[h];
        }

        // carry out
        for (int h = 0; h < c.size(); h++) {
            if (h + 1 < c.size()) {
                c[h + 1] = c[h + 1] + c[h] / 10;
            }

            c[h] = c[h] % 10;
        }
    }

    // remove additional zeros
    int n = c.size();

    while (n && c[n - 1] == 0) {
        n--;
    }

    c.resize(n);

    // exchange the actual number back to the number string
    for (char & k : c) {
        k = k + '0';
    }

    // exception: pure zero
    if (c.empty()) {
        c = "0";
    }

    // reverse back the answer string
    reverse(c.begin(), c.end());

    return c;
}

int main() {
    string a;
    string b;

    // execute the string operator to find out the answer
    while (cin >> a >> b) {
        cout << a * b << endl;
    }

    return 0;
}