#include <iostream>
using namespace std;

int main() {
    char c;
    int k = 0;

    while (cin.get(c)) {
        // condition: not double quotes
        if (c != '"') {
            cout << c;
        }

        // condition: first double quotes
        else if (++k % 2) {
            cout << "``";
        }

        // condition: second double quotes
        else {
            cout << "''";
        }
    }

    return 0;
}