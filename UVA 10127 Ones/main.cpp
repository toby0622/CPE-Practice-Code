// congruence modulo

#include <iostream>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        int answer = 1;
        int remainder = 1;

        while (remainder % n) {
            answer++;
            remainder = (remainder * 10 + 1) % n;
        }

        cout << answer << endl;
    }

    return 0;
}