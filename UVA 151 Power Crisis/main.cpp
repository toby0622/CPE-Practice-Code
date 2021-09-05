#include <iostream>
#include <queue>
using namespace std;

bool find(int n, int m) {
    queue<int> crisis;

    for (int temp = 1; temp <= n; temp++) {
        crisis.push(temp);
    }

    int count = 0;

    while (crisis.size() != 1) {
        int Target = crisis.front();

        crisis.pop();

        if (count % m != 0) {
            crisis.push(Target);
        }

        count++;
    }

    return crisis.front() == 13;
}

int main() {
    int n;

    while (cin >> n && n != 0) {
        for (int m = 1; ; m++) {
            if (find(n, m)) {
                cout << m << endl;
                break;
            }
        }
    }

    return 0;
}