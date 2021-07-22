#include <iostream>
#define MAX_SIZE 1000000
using namespace std;

int X[MAX_SIZE];

// self-made comparison function for qsort
int Compare(const void *a, const void *b) {
    return (*(int *)a) - (*(int *)b);
}

// function for finding median
void FindMid(int *xInput, int n) {
    int min;
    int max;
    // the number of medians for the data
    int nx;
    // the number all possible medians
    int np;
    int i;

    // sort the given data using the self-made sorting algorithm
    qsort(xInput, n, sizeof(int), Compare);

    // condition: array with odd amount of elements
    if (n % 2 == 1) {
        min = xInput[n / 2];

        for (nx = 0, i = 0; i < n; i++) {
            if (xInput[i] == min) {
                nx++;
            }
        }

        np = 1;
    }

    // condition: array with even amount of elements
    else {
        min = xInput[n / 2 - 1];
        max = xInput[n / 2];

        for (nx = 0, i = 0; i < n; i++) {
            if (min <= xInput[i] && xInput[i] <= max) {
                nx++;
            }
        }

        np = max - min + 1;
    }

    // output the answer as required
    cout << min << " " << nx << " " << np << endl;
}

int main() {
    int n;

    // for each test case
    while (cin >> n) {
        // input the given data
        for (int i = 0; i < n; i++) {
            cin >> X[i];
        }

        // calculate the final result
        FindMid(X, n);
    }

    return 0;
}