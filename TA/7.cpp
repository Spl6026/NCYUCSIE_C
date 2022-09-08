/*
問題描述：
輸入n個正整數，n不大於3000，進行泡沫排序法，輸出總共交換次數，最後輸出排序結果。

輸入說明：第一行輸入n，第二行輸入n個數字，數字間以第一行輸入n，第二行輸入n個數字，數字間以一個空白隔開。

輸出說明：
第一行輸出交換次數，第二行輸出最後排序結果。

範例：
10
93 57 59 21 42 38 25 66 93 77

20
21 25 38 42 57 59 66 77 93 93
*/

#include <iostream>

using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (a[j - 1] > a[j]) {
                int t = a[j - 1];
                a[j - 1] = a[j];
                a[j] = t;
                c++;
            }
        }
    }
    cout<<c<<endl;
    for (int i = 0; i < n-1; i++)
        cout<< a[i] << ' ';
    cout<<a[n-1]<<endl;
}