#include <iostream>
using namespace std;

int main() {
    // the amount of cola you buy
    int n;
    // the amount of cola you can drink
    int sum;
    // the number that indicates the leftover bottles
    int surplus;

    // input the starting amount of cola
    while (cin >> n) {
        // drink n bottles of cola
        sum = n;

        // able to exchange a new bottle
        while (n >= 3) {
            surplus = n % 3;
            n = n / 3;
            sum = sum + n;
            n = n + surplus;
        }

        // borrow a empty bottle from your friend
        // only possible when you already have two empty bottles (or you won't be able to return it back)
        if (n == 2) {
            sum++;
        }

        // output the final result
        cout << sum << endl;
    }

    return 0;
}