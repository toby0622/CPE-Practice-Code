#include <iostream>
using namespace std;

int main() {
    // need 'long long' to store the value because the possible
    // input integer will be smaller than 10^15
    long long int S;
    long long int D;
    long long int A;

    // input the data (initial size of group & group size on specific day)
    while (cin >> S >> D) {
        for (int i = 0;  ; i++) {
            // calculate the area using trapezoid formula
            A = (S + (S + i)) * (i + 1) / 2;

            // meet the requirement
            if (A >= D) {
                cout << S + i << endl;
                break;
            }
        }
    }

    return 0;
}