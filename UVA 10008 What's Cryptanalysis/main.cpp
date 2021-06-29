#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int sentence = 0;

    // amount of sentence given
    cin >> sentence;

    // the amount of appearance for alphabets
    int count[300] = {};
    // find the maximum amount of letters
    int length = 0;

    for (int i = 0; i <= sentence; i++) {
        string given;
        // input the each sentence with space
        getline(cin, given);

        // calculate the appearance of the letters
        // exchange all letters into capital
        // find the total amount of letters
        for (char & j : given) {
            if (j >= 'a' && j <= 'z' ||
            j >= 'A' && j <= 'Z') {
                j = toupper(j);
                count[j]++;
                length++;
            }

            else {
                continue;
            }
        }
    }

    char alphabet;

    // traverse the alphabet list and output the result according to the question requirement
    for (int i = length; i > 0; i--) {
        for (alphabet = 'A'; alphabet <= 'Z'; alphabet++) {
            if (count[alphabet] == i) {
                cout << alphabet << " " << i << endl;
            }
        }
    }

    return 0;
}