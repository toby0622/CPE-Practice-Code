// using DFS (depth-first search)

#include <iostream>
using namespace std;

int m;
int n;
char Map[110][110];
bool Collected[110][110];

void collectOil(int i, int j) {
    if (i < 0 || j < 0 || i >= m || j >= n || Map[i][j] == '*' || Collected[i][j]) {
        return;
    } else {
        Collected[i][j] = true;
        collectOil(i - 1, j - 1);
        collectOil(i - 1, j);
        collectOil(i - 1, j + 1);
        collectOil(i, j - 1);
        collectOil(i, j + 1);
        collectOil(i + 1, j - 1);
        collectOil(i + 1, j);
        collectOil(i + 1, j + 1);
    }
}

int main() {
    while (cin >> m >> n && n != 0 || m != 0) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> Map[i][j];
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                Collected[i][j] = false;
            }
        }

        int number = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (Map[i][j] == '@' && !Collected[i][j]) {
                    number++;
                    collectOil(i, j);
                }
            }
        }

        cout << number << endl;
    }

    return 0;
}