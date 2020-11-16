#include <iostream>
using namespace std;

void kuti(long long data, long long start) {
    char *s[] = {" lakh", " hajar", " shata", " "};
    int base[] = {100000, 1000, 100, 1};
    int mod[] = {100, 100, 10, 100};

    for(int k = 0; k < 4; k++) {
        // 對於每個單位，萃取出數值 value
        long long value = data / base[k] % mod[k];

        // 如果本身無值且還未開始列印，則跳過
        if(value == 0 && start == false) {
            continue;
        }

        // 否則開始列印，設定 start 為真
        else {
            start = true;
        }

        // 若 value 有值，則印出該數值 value 及單位
        if(value) {
            cout << " " << value << s[k];
        }
    }
}

int main() {
    long long n = 0;
    long long num = 0;

    while(cin >> n) {
        cout << ++num << ".";

        // 依照 base 計算三個區段 a, b, c
        long long base = 10000000;
        long long a = n / base / base % base;
        long long b = n / base % base;
        long long c = n / 1 % base;

        // 描述第一區段前，若 a 有值，則印出區段結尾
        // 由於第一區段前沒有區段，以 0 呼叫函式表示之
        kuti(a, 0);

        if(a) {
            cout << "kuti";
        }

        // 描述第二區段，若第一區段或第二區段有值，則印出區段結尾
        kuti(b, a);

        if(a | b) {
            cout << "kuti";
        }

        // 描述第三區段，第二參數指示前方區段是否由值
        kuti(c, a | b);

        // 如果 n 為 0，則因為沒有前導值，整著操作都不會印出資料，必須單獨處理
        if(n == 0) {
            cout << "0";
        }

        cout << endl;
    }
    return 0;
}