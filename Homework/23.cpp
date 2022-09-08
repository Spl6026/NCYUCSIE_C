/*
給你一個m*n的字元方塊（1 <= m,n <=50），以及一些字串，請你找出這些字串在字元方塊中出現的位置。請參考Sample Output。
我們在字元方塊中尋找字串的方向可以有8個：往左、往右、往上、往下、往左上、往左下、往右上、往右下。另外，請忽略字元大小寫，即 A 和 a 應被視為相同的字元。

Input
輸入的第一列有一個整數代表以下有幾組測試資料。
每組測試資料的第1列，有2個整數m,n（1 <= m,n <=50），代表接下來的文字方塊有m列，每列有n個字元。在文字方塊之後的一列有一個整數 k，代表接下來的k列為欲搜尋的字串。請參考Sample Input。

Output
每組測試資料中欲搜尋字串，請輸出其出現在文字方塊中的位置X Y。（第X列，第Y行）
如果在文字方塊中該字串出現在不只一個地方，請輸出在最上方的那一組（以欲搜尋字串的第一個字元來比較），若在同一行，則輸出最左邊的那一組。所有欲搜尋的字串至少出現一次。
測試資料間也請空一列。

Sample input
2

8 11
abcDEFGhigg
hEbkWalDork
FtyAwaldORm
FtsimrLqsrc
byoArBeDeyv
Klcbqwikomk
strEBGadhrb
yUiqlxcnBjf
4
Waldorf
Bambi
Betty
Dagbert

2 2
ab
Ca
3
a
ba
a

Sample Output
2 5
2 3
1 2
7 8

1 1
1 2
1 1
*/

#include <iostream>

using namespace std;

int main() {
    int h;
    cin >> h;
    while (h != 0) {
        int n, m;
        cin >> n >> m;
        char a[n + 1][m + 1];
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
                a[i][j] = tolower(a[i][j]);
            }
        int r;
        cin >> r;
        string b[r];
        for (int i = 0; i < r; i++) {
            cin >> b[i];
            for (int j = 0; j < b[i].length(); j++)
                b[i][j] = tolower(b[i][j]);
        }

        int count = 0;
        while (count != r) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                    bool compare = false;
                    if (b[count][0] == a[i][j]) {
                        int sl = b[count].length();
                        /*向上檢查*/if (i >= sl) {
                            int place = 0;
                            while (a[i - place][j] == b[count][place]) {
                                place++;
                                if (place == sl)
                                    compare = true;
                            }
                        }
                        /*向下檢查*/if (i + sl - 1 <= n) {
                            int place = 0;
                            while (a[i + place][j] == b[count][place]) {
                                place++;
                                if (place == sl)
                                    compare = true;
                            }
                        }
                        /*向左檢查*/if (j >= sl) {
                            int place = 0;
                            while (a[i][j - place] == b[count][place]) {
                                place++;
                                if (place == sl)
                                    compare = true;
                            }
                        }
                        /*向右檢查*/if (j + sl - 1 <= m) {
                            int place = 0;
                            while (a[i][j + place] == b[count][place]) {
                                place++;
                                if (place == sl)
                                    compare = true;
                            }
                        }
                        /*向左上檢查*/if (i >= sl && j >= sl) {
                            int place = 0;
                            while (a[i - place][j - place] == b[count][place]) {
                                place++;
                                if (place == sl)
                                    compare = true;
                            }
                        }
                        /*向右上檢查*/if (i >= sl && j + sl - 1 <= m) {
                            int place = 0;
                            while (a[i - place][j + place] == b[count][place]) {
                                place++;
                                if (place == sl)
                                    compare = true;
                            }
                        }
                        /*向左下檢查*/if (i + sl - 1 <= n && j >= sl) {
                            int place = 0;
                            while (a[i + place][j - place] == b[count][place]) {
                                place++;
                                if (place == sl)
                                    compare = true;
                            }
                        }
                        /*向右下檢查*/if (i + sl - 1 <= n && j + sl - 1 <= m) {
                            int place = 0;
                            while (a[i + place][j + place] == b[count][place]) {
                                place++;
                                if (place == sl)
                                    compare = true;
                            }
                        }
                        if (compare) {
                            cout << i << ' ' << j << endl;
                            i = n;
                            j = m;
                            count++;
                        }
                    }
                }
            }
        }
        h--;
        if (h != 0)
            cout << endl;
    }
}