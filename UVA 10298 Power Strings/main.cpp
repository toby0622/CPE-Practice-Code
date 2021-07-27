#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[1000001];
    int i;
    int j;
    int k;
    int len;
    // check if the sub-string is repeated
    int flag;

    // for each input string
    while (cin >> s) {
        // ending condition
        if (strcmp(s, ".") == 0) {
            break;
        }

        // calculate the length of string
        len = strlen(s);

        // sub-string from 1 to string length
        for (i = 1; i <= len; i++) {
            // the length of the sub-string is not a factor of the whole string, not possible
            if (len % i != 0) {
                continue;
            }

            flag = 1;

            // flag = 0 means that the sub-sting is not repeated
            // break out the loop
            for (j = i; j < len && flag == 1; j += i) {
                for (k = 0; k < i && flag == 1; k++) {
                    if (s[k] != s[j + k]) {
                        flag = 0;
                    }
                }
            }

            // flag = 1 means that the sub-string has repeated for a specific of time
            // output that specific time and jump out of the loop
            if (flag) {
                cout << len / i << endl;
                break;
            }
        }
    }

    return 0;
}