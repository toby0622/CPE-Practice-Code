#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int m;
    int n;

    cin >> m >> n;

    // create a word value dictionary using 'STL map'
    map<string, int> hay;

    string keyword;
    int price;

    // load in the word value into the dictionary map
    while (m--) {
        cin >> keyword >> price;

        hay[keyword] = price;
    }

    string article;

    // input the articles and calculate the value of it
    while (n--) {
        int answer = 0;

        while (cin >> article && article != ".") {
            answer = answer + hay[article];
        }

        // output the final result
        cout << answer << endl;
    }
}