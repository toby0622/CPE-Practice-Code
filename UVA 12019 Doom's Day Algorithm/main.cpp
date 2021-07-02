#include <iostream>
using namespace std;

int main() {
    // week days (Sunday to Saturday)
    char week[7][10] = {
            "Sunday", "Monday", "Tuesday",
            "Wednesday", "Thursday", "Friday", "Saturday"
    };

    // number of days in each month
    int monthDays[] = {
            31, 28, 31, 30, 31, 30,
            31, 31, 30, 31, 30, 31
    };

    int n;

    // total cases
    cin >> n;

    // each data case
    while (n--) {
        int month;
        int day;

        // input the specific date
        cin >> month >> day;

        // 2010.12.31 Friday = index 5
        int w = 5;

        // find the number of days from start to current
        for (int i = 1; i < month; i++) {
            w = w + monthDays[i - 1];
        }

        // calculate the remainder to find the weekday
        w = (w + day) % 7;

        // output the result
        cout << week[w] << endl;
    }

    return 0;
}