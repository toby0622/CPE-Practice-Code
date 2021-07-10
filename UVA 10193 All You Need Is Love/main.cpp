// by implementing 'Euclidean Algorithm'

#include <iostream>
using namespace std;

char S1[31];
char S2[31];

// convert the binary input string into decimal number integer
int stringToInt(const char S[31]) {
    int answer = 0;

    for (int i = 0; i < 30; i++) {
        if (S[i] == '\0') {
            break;
        }

        answer = answer * 2;

        if (S[i] == '1') {
            answer = answer + 1;
        }
    }

    return answer;
}

// find the greatest common divider using Euclidean Algorithm
int greatestCommonDivider(int p, int q) {
    if (p < q) {
        return greatestCommonDivider(q, p);
    }

    if (q == 0) {
        return p;
    }

    return greatestCommonDivider(q, p % q);
}

int main() {
    int N;

    cin >> N;

    for (int p = 1; p <= N; p++) {
        cin >> S1 >> S2;

        int N1 = stringToInt(S1);
        int N2 = stringToInt(S2);

        // condition: gcd is bigger than 1
        if (greatestCommonDivider(N1, N2) > 1) {
            cout << "Pair #" << p << ": All you need is love!" << endl;
        }

        // condition: gcd is equal to 1
        else {
            cout << "Pair #" << p << ": Love is not all you need!" << endl;
        }
    }

    return 0;
}