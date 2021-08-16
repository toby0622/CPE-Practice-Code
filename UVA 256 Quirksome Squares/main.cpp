// only possible number -> perfect square
// find the perfect square and pad the needed zeros

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

void Quirk(int n) {
    int Size = 1;

    for (int i = 0; i < n / 2; i++) {
        Size = Size * 10;
    }

    for (int i = 0; i < Size; i++) {
        int Square = i * i;
        stringstream ss;
        string output;

        if (((Square / Size) + (Square % Size)) == i) {
            if (n == 2) {
                ss << setw(2) << setfill('0') << Square;
                ss >> output;
                cout << output << endl;
            } else if (n == 4) {
                ss << setw(4) << setfill('0') << Square;
                ss >> output;
                cout << output << endl;
            } else if (n == 6) {
                ss << setw(6) << setfill('0') << Square;
                ss >> output;
                cout << output << endl;
            } else if (n == 8) {
                ss << setw(8) << setfill('0') << Square;
                ss >> output;
                cout << output << endl;
            }
        }
    }
}

int main() {
    int n;

    while (cin >> n) {
        Quirk(n);
    }

    return 0;
}