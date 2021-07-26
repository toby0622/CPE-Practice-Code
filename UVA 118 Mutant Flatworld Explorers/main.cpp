#include <iostream>
using namespace std;

int main() {
    // direction for east, south, west, north
    char direct[4] = {'E', 'S', 'W', 'N'};
    // x index adjustment for each direction
    int op_x[4] = {1, 0, (-1), 0};
    // y index adjustment for each direction
    int op_y[4] = {0, (-1), 0, 1};
    int bound_top;
    int bound_right;
    int cp_x;
    int cp_y;
    int cp_direct;
    char cp_ch;
    char instruction[101];
    // range field
    char map[51][51];
    char *ptr;
    int np_x;
    int np_y;

    // input the field range
    cin >> bound_right >> bound_top;

    // initialize the moving field
    for (cp_y = 0; cp_y <= bound_top; cp_y++) {
        for (cp_x = 0; cp_x <= bound_right; cp_x++) {
            map[cp_y][cp_x] = 0;
        }
    }

    // input the starting point and starting direction
    while (cin >> cp_x >> cp_y >> cp_ch) {
        // find the index for that specific direction
        for (cp_direct = 0; cp_direct < 4; cp_direct++) {
            if (cp_ch == direct[cp_direct]) {
                break;
            }
        }

        // input the action command
        cin >> instruction;

        for (ptr = instruction; *ptr != '\0'; ptr++) {
            // action: moving forward
            if ('F' == *ptr) {
                np_x = cp_x + op_x[cp_direct];
                np_y = cp_y + op_y[cp_direct];

                // outbound situation, set a wall and output the required result
                if (np_x < 0 || np_x > bound_right || np_y < 0 || np_y > bound_top) {
                    if (map[cp_y][cp_x] == 0) {
                        cout << cp_x << " " << cp_y << " " << direct[cp_direct] << " LOST" << endl;
                        map[cp_y][cp_x] = 'Q';
                        break;
                    }
                }

                // inbound, update the coordinate value
                else {
                    cp_x = np_x;
                    cp_y = np_y;
                }
            }

            // action: turn right
            else if ('R' == *ptr) {
                cp_direct++;

                // adjust the index value
                if (cp_direct >= 4) {
                    cp_direct = 0;
                }
            }

            // action: turn left
            else if ('L' == *ptr) {
                cp_direct--;

                // adjust the index value
                if (cp_direct < 0) {
                    cp_direct = 3;
                }
            }
        }

        // output the final result as required
        if (*ptr == '\0') {
            cout << cp_x << " " << cp_y << " " << direct[cp_direct] << endl;
        }
    }

    return 0;
}