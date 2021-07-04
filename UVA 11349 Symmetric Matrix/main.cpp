#include <iostream>
using namespace std;

int main() {
    int cases;
    int n;
    char clean[100];
    long long matrix[100][100];
    int i;
    int j;
    int flag;
    int counter = 1;

    cin >> cases;

    while (counter <= cases) {
        cin >> clean >> clean >> n;

        flag = 1;

        // input the given matrix
        // check whether negative values are included or not
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cin >> matrix[i][j];

                if (matrix[i][j] < 0) {
                    flag = 0;
                }
            }
        }

        // check whether the matrix is symmetric or not
        if (flag == 1) {
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    if (matrix[i][j] != matrix[n - 1 - i][n - 1 - j]) {
                        flag = 0;
                        break;
                    }
                }
            }
        }

        // output the final result
        if (flag == 0) {
            cout << "Test #" << counter << ": Non-symmetric." << endl;
        } else {
            cout << "Test #" << counter << ": Symmetric." << endl;
        }

        // increment the counter
        counter++;
    }

    return 0;
}