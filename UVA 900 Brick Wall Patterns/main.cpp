// fibonacci sequence

#include <iostream>
using namespace std;

int main() {
    long long int table[51];

    table[0] = 1;
    table[1] = 1;

    // create the fibonacci table
    for (int i = 2; i < 51; i++) {
        table[i] = table[i - 1] + table[i - 2];
    }

    int n;

    // find the answer in the table
    while (cin >> n && n != 0) {
        cout << table[n] << endl;
    }

    return 0;
}