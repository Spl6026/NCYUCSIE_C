/*
現在全班按照座號排列要到保健中心量身高體重，小明發現排列後有高低起伏。
小明想知道較高的同學有幾個(排在中間的同學較旁邊兩個同學高的)，請你寫一個程式幫他算出來。
排在第一個與最後一個的不考慮。

Input
1. 首先輸入一個正整數N(1<=N<=100)，表示班上有幾位同學。
2. 接著輸入N個正整數(1<=N<=200)，表示按座號排序後的身高。
輸入多行，表示多筆測資，每行重複步驟1和2，直到EOF結束程式。

Output
第1行輸出有幾位較高的同學，第2~n+1行書出每個同學的身高，若他是屬於較高的同學，則在身高後面多輸出"+++++"。
兩筆測資中間請空一行。

Sample Input
5 120 130 120 130 140
10 150 151 150 152 151 153 157 159 155 150

Sample Output
1
120
130+++++
120
130
140

3
150
151+++++
150
152+++++
151
153
157
159+++++
155
150
*/

#include <iostream>
#include <sstream>
using namespace std;
int main() {
    int n, c, f = 0;
    while (cin >> n) {
        if (f == 1)
            cout << endl;
        f = 1;
        c = 0;
        int a[n];
        string b[n];
        for (int i = 0; i < n; i++) {
            stringstream ss;
            cin >> a[i];
            ss << a[i];
            ss >> b[i];
        }
        for (int i = 1; i < n - 1; i++)
            if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
                b[i] += "+++++";
                c++;
            }
        cout << c << endl;
        for (int i = 0; i < n; i++)
            cout << b[i] << endl;
    }
}