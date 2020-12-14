#include <iostream>
#include <map> // 引入 map 的 header
#include <string>
using namespace std;

int main(){
    map<string, int> count;
    // 紀錄國家及其人數
    map<string, int>::iterator iter;
    // 建立與 count 相同之 iterator

    string first_s;
    // 儲存每列的國家名稱
    char others[76] = {0};
    // 儲存該列其後的人名
    int n;
    // 資料總數

    cin >> n;
    // 讀入資料總數的數額
    cin.ignore();
    // 忽略換行鍵

    while (n--) {
        // 持續讀取國家及其後的人名
        cin >> first_s;
        count[first_s]++;
        // 加總特定國家的人數
        cin.getline(others, 76);
        // 讀入剩下的部分
    }

    for(iter = count.begin(); iter != count.end(); iter++) {
        // begin 和 end 分別指向迭代器的開始和結束
        cout << iter -> first << " ";
        // map 的索引 = key
        cout << iter -> second << endl;
        // map 的值 = value
    }

    return 0;
}
