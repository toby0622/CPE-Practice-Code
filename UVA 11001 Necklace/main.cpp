// go through all the possibilities and find the maximum length
// if there exists two or above possibilities having same length, output zero

#include <iostream>
using namespace std;

int main() {
    int vt;
    int v0;

    while (cin >> vt >> v0) {
        if (vt == 0 && v0 == 0) {
            break;
        }

        int n = 0;
        int max = 0;

        for (int i = 0; (double) vt / i > v0; i++) {
            int len = (-v0) * i * i + vt * i;

            if (len > max) {
                max = len;
                n = i;
            } else if (len == max) {
                n = 0;
            }
        }

        cout << n << endl;
    }

    return 0;
}