#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // music note
    char octave[] = "XcdefgabCDEFGAB";
    // conversion table for music note and activate finger
    char finger[16][11] = {
            "0000000000", /*X*/ "0111001111", /*c*/
            "0111001110", /*d*/ "0111001100", /*e*/
            "0111001000", /*f*/ "0111000000", /*g*/
            "0110000000", /*a*/ "0100000000", /*b*/
            "0010000000", /*C*/ "1111001110", /*D*/
            "1111001100", /*E*/ "1111001000", /*F*/
            "1111000000", /*G*/ "1110000000", /*A*/
            "1100000000", /*B*/
    };

    int t;

    // input the amount of test cases
    cin >> t;

    // clear the newline character
    cin.ignore();

    // for each test case
    while (t--) {
        char str[300];

        // input the data array
        cin.getline(str, 300);

        // find the array length
        int len = strlen(str);
        // accumulate the pressing time for the ten fingers
        int cnt[10] = {};
        // note index (i - 1)
        int cur = 0;
        // note index (i)
        int next;

        // record the total pressing times
        for (int i = 0; i < len; i++) {
            for (next = 1; octave[next] != str[i]; next++);

            for (int j = 0; j < 10; j++) {
                if (finger[cur][j] == '0' && finger[next][j] == '1') {
                    cnt[j]++;
                }
            }

            cur = next;
        }

        // output the final result as required
        cout << cnt[0];

        for (int j = 1; j < 10; j++) {
            cout << " " << cnt[j];
        }

        cout << endl;
    }

    return 0;
}