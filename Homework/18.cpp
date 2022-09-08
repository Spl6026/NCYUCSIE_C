/*
請寫一個程式計算2個一元多次方程式的積。

輸入說明:
每筆測資總共有2行，每行的第一個數字n(n <= 10)表示最高為n次，後面有n + 1個數字，(-100 <= 每個數字<= 100)，由左到右表示xn, xn-1, ..., x1, x0的係數。會有多筆測資。

輸出說明:
每筆測資由他計算後的最高次方項係數開始，輸出到0次係數，每個數字用空格隔開，且如果有0也要照常輸出。

sinple input:
1 1 2
0 1
1 1 2
1 1 2

simple output:
1 2
1 4 4
*/

#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string s1, s2;
    while (getline(cin, s1)) {
        getline(cin, s2);
        stringstream ss1, ss2;
        ss1 << s1;
        ss2 << s2;
        int n, m, r;
        ss1 >> n;
        ss2 >> m;
        r = m + n + 1;
        int a[n + 1];
        int b[m + 1];
        int c[r];
        for (int i = n; i >= 0; i--)
            ss1 >> a[i];
        for (int i = m; i >= 0; i--)
            ss2 >> b[i];
        for (int i = 0; i < r; i++)
            c[i] = 0;
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= m; j++)
                c[i + j] += a[i] * b[j];

        for (int i = r - 1; i > 0; i--)
            cout << c[i] << ' ';
        cout << c[0] << endl;
    }
}