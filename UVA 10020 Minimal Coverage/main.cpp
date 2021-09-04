// greedy approach

#include <iostream>
using namespace std;

const int MX_SEG = 100000;

class Segment {
public:
    int left;
    int right;
};

Segment seg[MX_SEG];
Segment res[MX_SEG];

int segSize;
int resSize;

int coverIt(int m) {
    Segment cover{};
    cover.left = 0;
    cover.right = m;

    resSize = 0;

    while (true) {
        int max = (-1);

        for (int i = 0; i < segSize; i++) {
            if (seg[i].right <= cover.left || cover.left < seg[i].left) {
                continue;
            }

            if (max == (-1) || seg[i].right > seg[max].right) {
                max = i;
            }
        }

        if (max == (-1)) {
            break;
        }

        res[resSize++] = seg[max];
        cover.left = seg[max].right;

        if (cover.left >= cover.right) {
            return resSize;
        }
    }

    return resSize = 0;
}

int main() {
    int n;

    cin >> n;

    while (n--) {
        int m;

        cin >> m;

        Segment t{};
        segSize = 0;

        while (cin >> t.left >> t.right) {
            if (t.left == 0 && t.right == 0) {
                break;
            }

            seg[segSize++] = t;
        }

        cout << coverIt(m) << endl;

        for (int i = 0; i < resSize; i++) {
            cout << res[i].left << " " << res[i].right << endl;
        }

        if (n > 0) {
            cout << endl;
        }
    }

    return 0;
}