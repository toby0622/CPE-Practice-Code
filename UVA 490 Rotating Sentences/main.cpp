#include <iostream>
// function library for 'strlen()'
#include <cstring>
using namespace std;

int main() {
    // 'str' records each input sentences
    char str[100][101];
    // 'len' records the length of each input sentences
    int len[100];
    int n = 0;
    int max = 0;

    // initialize the array
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 101; j++) {
            str[i][j] = 0;
        }

        len[i] = 0;
    }

    // store the input into the array
    while (cin.getline(str[n], 101)) {
        // record the length of each input
        len[n] = strlen(str[n]);

        // find the maximum input sentence length
        if (len[n] > max) {
            max = len[n];
        }

        // to make the output easier,
        // add some space based on the maximum length,
        // also adjust the value of variable 'len'
        for (int add = len[n]; add < max; add++) {
            str[n][add] = ' ';
            len[n]++;
        }

        // 'n' = total rows
        n++;
    }

    // output the result that matches the question requirement
    for (int j = 0; j < max; j++) {
        for (int i = n - 1; i >= 0; i--) {
            // prevent additional spaces be displayed
            if (j < len[i]) {
                cout << str[i][j];
            }
        }

        cout << endl;
    }

    return 0;
}