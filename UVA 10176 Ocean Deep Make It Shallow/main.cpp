/*
 * char *strcat(char *dest, const char *src);
 *
 * define in header <cstring>
 *
 * Appends a copy of the character string pointed to by src to
 * the end of the character string pointed to by dest.
 * The character src[0] replaces the null terminator at the end of dest.
 * The resulting byte string is null-terminated.
 *
 * The behavior is undefined if the destination array is not large
 * enough for the contents of both src and dest and the terminating null character.
 *
 * The behavior is undefined if the strings overlap.
 */

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int number;
    int i;
    char buffer[10240];
    char temporary[10240];

    while (cin >> temporary) {
        buffer[0] = '\0';
        strcat(buffer, temporary);

        // read until '#' character
        while (buffer[strlen(buffer) - 1] != '#') {
            cin >> temporary;
            strcat(buffer, temporary);
        }

        buffer[strlen(buffer) - 1] = '\0';
        number = 0;

        // start from the smallest digit
        for (i = strlen(buffer) - 1; i >= 0; i--) {
            // current digit left shift, which means the value times two
            number = number * 2;

            // if the digit value is 1, increment the number value
            if (buffer[i] == '1') {
                number++;
            }

            // divide the current value with 131071
            while (number >= 131071) {
                number = number - 131071;
            }
        }

        // output the final result
        if (number == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}