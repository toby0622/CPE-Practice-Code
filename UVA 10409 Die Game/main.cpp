#include <iostream>
#include <string>
using namespace std;

int main() {
    string b;
    int a;
    int n;
    int s;
    int w;
    int e;
    int up;
    int down;
    int t;

    while (cin >> a && a) {
        // setup the initial value based on the question's statement
        up = 1;
        n = 2;
        w = 3;
        e = 4;
        s = 5;
        down = 6;

        while (a--) {
            cin >> b;

            // four kinds of dice rotating action
            if (b == "north") {
                t = up;
                up = s;
                s = down;
                down = n;
                n = t;
            } else if (b == "south") {
                t = up;
                up = n;
                n = down;
                down = s;
                s = t;
            } else if (b == "east") {
                t = up;
                up = w;
                w = down;
                down = e;
                e = t;
            } else if (b == "west") {
                t = up;
                up = e;
                e = down;
                down = w;
                w = t;
            }
        }

        // output the upper face of the dice
        cout << up << endl;
    }

    return 0;
}