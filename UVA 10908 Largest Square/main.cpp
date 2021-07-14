// find around the mid point circle by circle
#include <iostream>
#define MAX 101
using namespace std;

int main() {
    int T;
    int M;
    int N;
    int Q;
    int r;
    int c;
    // character matrix
    char map[MAX][MAX];

    // input the number of test cases
    cin >> T;

    // for each test cases
    while (T--) {
        cin >> M >> N >> Q;

        // input the given character matrix
        for (int i = 0; i < M; i++) {
            cin >> map[i];
        }

        cout << M << " " << N << " " << Q << endl;

        // for each selected mid point
        while (Q--) {
            int answer;
            int a;
            int b;

            cin >> r >> c;

            // initialize the side length to 1
            answer = 1;

            // between the limited range given by the question
            for (int i = 1; i <= M || i <= N; i++) {
                // flag = 0 means the expansion should be continue
                int flag = 0;

                // for the mid point (r, c)
                // find the character around it
                for (a = r - i; a <= r + i; a++) {
                    for (b = c - i; b <= c + i; b++) {
                        // out of bounds: flag = 1 (stop searching)
                        if (a < 0 || b < 0 || a >= M || b >= N) {
                            flag = 1;
                            break;
                        }

                        // different character: flag = 1 (stop searching)
                        if (map[a][b] != map[r][c]) {
                            flag = 1;
                            break;
                        }
                    }
                }

                // check the flag
                if (!flag) {
                    answer = answer + 2;
                } else {
                    break;
                }
            }

            // output the final result
            cout << answer << endl;
        }
    }

    return 0;
}