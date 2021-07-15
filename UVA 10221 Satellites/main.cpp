#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
// PI with high precision
#define PI (2 * acos(0.0))
using namespace std;

int main() {
    double s;
    double a;
    char unit[4];
    double arc;
    double chord;

    while (cin >> s >> a >> unit) {
        // calculation based on 'minute'
        if (strcmp(unit, "min") == 0) {
            a = a / 60;
        }

        // if the degree is bigger than 180
        // need to exchange it into 360 - a
        // to make sure the sin function to work correctly
        if (a > 180) {
            a = 360 - a;
        }

        // find out the arc distance and chord distance
        arc = 2 * PI * (s + 6440) * a / 360.0;
        chord = (s + 6440) * sin(a * PI / 2 / 180) * 2;

        // output the final result as required
        cout << fixed << setprecision(6) << arc << " " << chord << endl;
    }

    return 0;
}