/*
面前有無數個裝著球的箱子，請寫一個程式，對眼前的箱子內的球進行2種操作:
1.互換2個箱子的球
2.查看一個箱子內總共有多少球
並在結束時，按照順序輸出箱子裡面的球的數量

輸入說明:
第一行有一個n(1 <= n <= 100)，表示總共有幾個箱子，接下來有n個數字，由左到右分別是第1到第n個箱子的球數。
第二行開始，可能有1、2個數字，如果只有一個數字a(1 <= a <= n)，請輸出第a個箱子目前總共有幾個球，如果是2個數字a, b(1 <= a, b <= n)，請互換第a和第b個箱子的球。
讀到0結束。

輸出說明:
如果為查看箱子球數，則輸出一行要查看的箱子球數。
結束時輸出一行每個箱子的球個數，數字用空格隔開。

simple input:
5 1 2 3 4 5
1 2
1
2 3
3 5
0

simple output:
2
2 3 5 4 1
*/

#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    string s;
    while (getline(cin, s) && s != "0") {
        stringstream ss;
        int m, r, f = 0;
        ss << s;
        while (ss >> m) {
            m = m - 1;
            f += 1;
            if (f == 2) {
                int t = a[m];
                a[m] = a[r];
                a[r] = t;
            }
            r = m;
        }
        if (f == 1)
            cout << a[m] << endl;
    }
    for (int i = 0; i < n - 1; i++)
        cout << a[i] << ' ';
    cout << a[n - 1] << endl;
}