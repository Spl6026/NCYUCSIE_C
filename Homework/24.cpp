/*
輸入兩個大於long long int的兩個數字，請你利用string或其他方法實作大數加法。

Input
第一行會輸入一個數字n(1<=<=100)，代表有多少筆測資。
每筆測資輸入一行，包括兩個數，以空白分開。

Output
每筆測資輸出一行，表示計算後的結果。

Sample Input
2
1 123456789123456789123465788
9999999999999999999 1

Sample Output
123456789123456789123465789
10000000000000000000
*/

#include <iostream>

using namespace std;

int main() {
    string a, b;
    int n;
    cin >> n;
    for (int r = 0; r < n; r++) {
        cin >> a >> b;
        if (b.size() > a.size()) {
            string t;
            t = a;
            a = b;
            b = t;
        }
        int l1 = a.size(), l2 = b.size() - 1;
        int c[l1 + 1];
        c[0] = 0;
        for (int i = 1; i <= l1; i++)
            c[i] = a[i - 1] - '0';

        while (l1 > 0) {
            if (l2 >= 0)
                c[l1] += b[l2] - '0';
            if (c[l1] > 9) {
                c[l1 - 1] += 1;
                c[l1] -= 10;
            }
            l1--;
            l2--;
        }
        if (c[0] != 0)
            cout << c[0];
        for (int i = 1; i <= a.size(); i++)
            cout << c[i];
        cout << endl;
    }
}