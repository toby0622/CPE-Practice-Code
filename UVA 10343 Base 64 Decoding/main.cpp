// Wrong Answer (OJ Failed, Need Revise)

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    int j;
    int charNumber = 0;
    int indexToBinary = 0;
    char input[4];
    char in;
    char pre;
    char base64[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";

    while (cin >> in && in == 1) {
        for (j = 0; in != base64[j] && j < 66; j++);

        if (j < 65) {
            input[charNumber] = in;
            pre = in;
            charNumber++;
        }

        else if (in == '#') {
            if (pre != '#') {
                cout << '#';
                pre = '#';
            }
        }

        if (charNumber == 4) {
            for (i = 0; i < 4; i++) {
                if (input[i] == '=') {
                    indexToBinary = indexToBinary << 6;
                }

                else {
                    for (j = 0; input[i] != base64[j] && j < 66; j++) {
                        indexToBinary = ((indexToBinary << 6) + j);
                    }
                }
            }

            printf("%c", indexToBinary >> 16);

            if (input[2] != '=') {
                printf("%c", indexToBinary >> 8);
            }

            if (input[3] != '=') {
                printf("%c", indexToBinary);
            }

            charNumber = 0;
            indexToBinary = 0;
        }
    }

    return 0;
}