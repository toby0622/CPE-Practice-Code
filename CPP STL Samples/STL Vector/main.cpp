#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    vector<int>::iterator it;

    // 將資料由大到小輸入 vector
    for(int i = 10; i > 0; i--) {
        v.push_back(i);
    }

    // 顯示當前的 vector 狀態
    for(it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;

    // 使用 sort 將 vector 資料由小排到大
    sort(v.begin(), v.end());

    // 顯示排序後的 vector 狀態
    for(it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}