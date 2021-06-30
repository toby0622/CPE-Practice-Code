#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string a;
    string b;
    int countA[1005] = {0};
    int countB[1005] = {0};

    while (getline(cin, a)) {
        getline(cin, b);

        // special condition: blank be included in the input string
        if (a.empty() || b.empty()) {
            cout << endl;
            continue;
        }

        // initialize the counter
        memset(countA, 0, sizeof(countA));
        memset(countB, 0, sizeof(countB));

        // count the alphabet appearance in string 'a'
        for (char i : a) {
            countA[i]++;
        }

        // count the alphabet appearance in string 'b'
        for (char i : b) {
            countB[i]++;
        }

        // traverse the alphabet list and find the answer
        for (char i = 'a'; i <= 'z'; i++) {
            int j = 0;

            while (j < countA[i] && j < countB[i]) {
                cout << i;
                j++;
            }
        }

        cout << endl;
    }

    return 0;
}