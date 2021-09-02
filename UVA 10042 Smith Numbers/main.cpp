#include <iostream>
using namespace std;

// the sum of digits in the given number
int digitSum(int n) {
    int sum = 0;

    while (n > 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }

    return sum;
}

// the sum of digits in the prime factorization number
int factorDigitSum(int n) {
    int sum = 0;
    int temp = n;

    for (int i = 2; i * i <= temp; i++) {
        while (temp % i == 0) {
            temp = temp / i;
            sum = sum + digitSum(i);
        }
    }

    if (n != temp) {
        if (temp != 1) {
            sum = sum + digitSum(temp);
        }

        return sum;
    } else {
        return 0;
    }
}

int main() {
    int t;

    // input the number of test cases
    cin >> t;

    // each test case
    while (t--) {
        int n;

        cin >> n;

        int answer = n + 1;

        // find the smallest smith number
        while (true) {
            if (digitSum(answer) == factorDigitSum(answer)) {
                break;
            } else {
                answer++;
            }
        }

        // output the result
        cout << answer << endl;
    }

    return 0;
}