/*
輸入一個N進制的字串，請將他轉為十進制並輸出成電子鐘的形式。
一個電子鐘數字的底*高為5*5。如範例輸出所示，請自己依照下面推出其他數字。
0-9

Input
輸入多行測資，每個測資為一個正整數(N)及一行字串，表示N進制的一串數字，字串保證不會有非數字的字元。

Output
每個測資會輸出五行，但兩個測資中間需空一行。
每個測資兩個數字間需輸出一個空白，即大於9的數字兩兩中間需有一個空白。

Sample Input
2 0
2 1000

Sample Output
*****
*   *
*   *
*   *
*****

*****
*   *
*****
*   *
*****
*/

#include <iostream>
#include <cmath>

using namespace std;

void print(int m, int n) {
    int a[n];
    if (m == 0)
        a[0] = 0;
    string b[5][n];
    int c = n - 1;
    while (m != 0) {
        a[c] = m % 10;
        m = m / 10;
        c--;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            b[0][i] = "*****";
            b[1][i] = "*   *";
            b[2][i] = "*   *";
            b[3][i] = "*   *";
            b[4][i] = "*****";
        }
        if (a[i] == 1) {
            b[0][i] = "    *";
            b[1][i] = "    *";
            b[2][i] = "    *";
            b[3][i] = "    *";
            b[4][i] = "    *";
        }
        if (a[i] == 2) {
            b[0][i] = "*****";
            b[1][i] = "    *";
            b[2][i] = "*****";
            b[3][i] = "*    ";
            b[4][i] = "*****";
        }
        if (a[i] == 3) {
            b[0][i] = "*****";
            b[1][i] = "    *";
            b[2][i] = "*****";
            b[3][i] = "    *";
            b[4][i] = "*****";
        }
        if (a[i] == 4) {
            b[0][i] = "*   *";
            b[1][i] = "*   *";
            b[2][i] = "*****";
            b[3][i] = "    *";
            b[4][i] = "    *";
        }
        if (a[i] == 5) {
            b[0][i] = "*****";
            b[1][i] = "*    ";
            b[2][i] = "*****";
            b[3][i] = "    *";
            b[4][i] = "*****";
        }
        if (a[i] == 6) {
            b[0][i] = "*****";
            b[1][i] = "*    ";
            b[2][i] = "*****";
            b[3][i] = "*   *";
            b[4][i] = "*****";
        }
        if (a[i] == 7) {
            b[0][i] = "*****";
            b[1][i] = "    *";
            b[2][i] = "    *";
            b[3][i] = "    *";
            b[4][i] = "    *";
        }
        if (a[i] == 8) {
            b[0][i] = "*****";
            b[1][i] = "*   *";
            b[2][i] = "*****";
            b[3][i] = "*   *";
            b[4][i] = "*****";
        }
        if (a[i] == 9) {
            b[0][i] = "*****";
            b[1][i] = "*   *";
            b[2][i] = "*****";
            b[3][i] = "    *";
            b[4][i] = "*****";
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < n; j++) {
            if (j != n - 1)
                cout << b[i][j] << ' ';
            else
                cout << b[i][j];
        }
        cout << endl;
    }
}

void change(int a, string b) {
    int s = 0;
    int c = 0;
    for (int i = 0; i < b.length(); i++) {
        if (b[i] >= 'a' && b[i] <= 'z')
            b[i] = b[i] - 'a' + 36;
        else if (b[i] >= 'A' && b[i] <= 'Z')
            b[i] = b[i] - 'A'+ 10;
        else
            b[i] = b[i] - 48;
        s += b[i] * pow(a, b.length() - i - 1);
    }
    int n = s;
    while (s != 0) {
        s = s / 10;
        c++;
    }
    if (c == 0)
        c = 1;
    print(n, c);
}

int main() {
    int n;
    int f=0;
    while (cin >> n) {
        string a;
        cin.ignore();
        getline(cin, a);
        if(f==1)
            cout<<endl;
        change(n, a);
        f=1;
    }
}