#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[100000];
    char t[100000];
    int i;
    int j;

    // input the sub-string and the main string
    while (cin >> s >> t) {
        j = 0;

        // compare two strings one by one
        for (i = 0; i < strlen(s); i++) {
            for ( ; s[i] != t[j] && j < strlen(t); j++);

            // the sub-string is not included in the main string
            if (t[j] == '\0') {
                break;
            }

            j++;
        }

        // output the final result based on the conclusion above
        if (s[i] == '\0') {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}