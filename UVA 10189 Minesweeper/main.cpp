#include <iostream>
using namespace std;

int n;
int m;
char line[100][101];
int answer[100][100];
int field = 0;

void input() {
    for (int i = 0; i < n; i++) {
        // input the given minefield
        cin >> line[i];

        // initialize the answer array to '0'
        for (int j = 0; j < m; j++) {
            answer[i][j] = 0;
        }
    }
}

// if (i, j) is a mine, increment one to the answer array of all the neighboring blocks
void addNeighbor(int i, int j) {
    for (int ii = i - 1; ii <= i + 1; ii++) {
        for (int jj = j - 1; jj <= j + 1; jj++) {
            if (ii < 0 || ii >= n || jj < 0 || jj >= m) {
                continue;
            }

            answer[ii][jj]++;
        }
    }
}

// output the final result as required
void output() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // find a mine in the minefield, call function "addNeighbor"
            if (line[i][j] == '*') {
                addNeighbor(i, j);
            }
        }
    }

    if (field > 1) {
        cout << endl;
    }

    cout << "Field #" << field << ":" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (line[i][j] == '*') {
                cout << '*';
            } else {
                cout << answer[i][j];
            }
        }

        cout << endl;
    }
}

int main() {
    while (cin >> n >> m) {
        // ending condition
        if (n == 0 && m == 0) {
            break;
        }

        input();

        field++;

        output();
    }

    return 0;
}