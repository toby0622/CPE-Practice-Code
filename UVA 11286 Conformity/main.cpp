#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {
        // record the number of course selection
        map<set<int>, int> count;

        int M = 0;
        int MC = 0;

        while (n--) {
            set<int> suite;

            // input the course selection suite
            for (int m = 0; m < 5; m++) {
                int course;

                cin >> course;

                suite.insert(course);
            }

            // increment the suite count
            count[suite]++;

            int h = count[suite];

            // check if same maximum count exists
            if (h == M) {
                MC++;
            }

            // check if specific course suite has the most selection
            if (h > M) {
                M = h;
                MC = 1;
            }
        }

        // output the result
        cout << M * MC << endl;
    }

    return 0;
}