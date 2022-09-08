/*
請撰寫一個程式，可以根據使用者輸入的兩個矩陣，計算該兩個矩陣相乘的結果。圖示如下：

Input
1. 輸入兩個數字(M,N)，表示第一個矩陣大小，接著有M行，每行有N個整數。
2. 再輸入兩個數字(m,n)，表示第二個矩陣大小，接著有m行，每行有n個整數。
重複步驟1和2，當M和N為0時，結束程式。
0<=M, N <=1000，1<=m, n <=1000，矩陣內的數字在-10000到10000(含)之間

Output
無法計算矩陣的乘法就輸出一行Error。
否則輸出計算後的矩陣，兩兩數字中間空一格。

Sample Input
2 3
1 2 3
4 5 6
3 2
1 4
2 5
3 6
2 3
1 2 3
4 5 6
2 3
1 2 3
4 5 6
0 0

Sample Output
14 32
32 77
Error
*/

#include <iostream>
using namespace std;
int main() {
    int M, N, m, n;
    while (cin >> M >> N && M != 0 && N != 0) {
        int a[M][N];
        for (int i = 0; i < M; i++)
            for (int j = 0; j < N; j++)
                cin >> a[i][j];
        cin >> m >> n;
        int b[m][n];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> b[i][j];
        int c[M][n];
        if (N != m)
            cout << "Error" << endl;
        else {
            for (int i = 0; i < M; i++)
                for (int j = 0; j < n; j++)
                    c[i][j] = 0;
            for (int i = 0; i < M; i++)
                for (int j = 0; j < N; j++)
                    for (int k = 0; k < n; k++)
                        c[i][k] += a[i][j] * b[j][k];
            for (int i = 0; i < M; i++) {
                for (int j = 0; j < n - 1; j++)
                    cout << c[i][j] << " ";
                cout << c[i][n - 1] << endl;
            }
        }
    }
}