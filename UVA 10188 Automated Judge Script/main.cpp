#include <cstdio>
#include <cctype>
#include <iostream>
using namespace std;

int main() {
    int n;
    int m;
    int runCase = 0;
    string answer;
    string output;
    string input;
    bool accept;
    bool presentationError;

    while (cin >> n && n != 0) {
        getchar();
        answer = "";
        output = "";

        // input the given answer
        for (int i = 0; i < n; i++) {
            getline(cin, input);

            if (i) {
                answer.append("\n");
                answer.append(input);
            } else {
                answer = input;
            }
        }

        cin >> m;

        getchar();

        // input the student's answer
        for (int i = 0; i < m; i++) {
            getline(cin, input);

            if (i) {
                output.append("\n");
                output.append(input);
            } else {
                output = input;
            }
        }

        accept = true;

        // compare the answers between the question given and the student given
        if (answer != output) {
            accept = false;
        }

        // output the 'accept' result if the answers are the same
        if (accept) {
            cout << "Run #" << ++runCase << ": Accepted" << endl;
            continue;
        }

        presentationError = true;

        // remove all of the non-number characters
        for (int i = 0; i < answer.length(); i++) {
            if (!isdigit(answer[i])) {
                answer.erase(i, 1);
                i--;
            }
        }

        for (int i = 0; i < output.length(); i++) {
            if (!isdigit(output[i])) {
                output.erase(i, 1);
                i--;
            }
        }

        if (answer != output) {
            presentationError = false;
        }

        // output the 'presentation error' result if the answers are the same after removing non-number characters
        if (presentationError) {
            cout << "Run #" << ++runCase << ": Presentation Error" << endl;
            continue;
        }

        // purely wrong answer
        cout << "Run #" << ++runCase << ": Wrong Answer" << endl;
    }

    return 0;
}