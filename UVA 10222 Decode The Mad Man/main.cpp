/*
special syntax function 'strchr' (cplusplus.com):
--------------------------------------------------------
const char *strchr (const char * str, int character);
      char *strchr (      char * str, int character);
--------------------------------------------------------
Locate first occurrence of character in string.
(Returns a pointer to the first occurrence of character in the C string 'str'.)
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char c;
    // array 's' is the keyboard mapping
    char s[] = "`1234567890-="
               "qwertyuiop[]\\"
               "asdfghjkl;'"
               "zxcvbnm,./";

    // input the encoded character
    while (cin.get(c)) {
        // exchange to lower letter
        c = tolower(c);

        // use function 'strchr' to find the corresponding address
        char *p = strchr(s, c);

        // decode the character (two step forward on the keyboard)
        if (p) {
            cout << *(p - 2);
        }

        // non-character sign remains the same
        else {
            cout << c;
        }
    }

    return 0;
}