// arithmetic area calculation
// integration not needed

#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 2 * acos(0)
using namespace std;

int main() {
    double edge;
    double x;
    double y;
    double z;
    double equation1;
    double equation2;
    double equation3;
    double equation4;
    double triangle;

    while (cin >> edge) {
        equation1 = edge * edge;
        equation2 = PI * edge * edge / 4;
        triangle = edge * edge * sqrt(3) / 2 / 2;
        equation3 = PI * edge * edge / 6 * 2 - triangle;
        equation4 = equation2 - equation3;
        z = equation1 - 2 * equation2 + equation3;
        y = equation4 - z;
        x = equation1 - 4 * y - 4 * z;

        cout << fixed << setprecision(3) << x << " " << 4 * y << " " << 4 * z << endl;
    }

    return 0;
}