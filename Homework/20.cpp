/*
某國的軍事基地正在研發一種新的炸彈偵測器，軍方要測試使用這款偵測器，以了解哪裡還需要進行改進。將測試場地區分成多個正方形方格，軍方會在測試場地埋下炸彈，接著擺放炸彈偵測器，炸彈和偵測器不會放在同一個方格中。以炸彈偵測器為中心的周圍八格中若含有炸彈，就會被偵測到。現在軍方會給你場上空地丶炸彈偵測器以及炸彈的位置，請你推測出有多少炸彈可以被偵測出來，並且回報給長官。

Input
首先輸入一個正整數T(1<= T <=100)，表示接著有T筆輸入。
每筆輸入的第一列有兩個正整數M以及N(1 <= M, N <= 1000)，代表這個測試場地由上而下共有M列，由左至右共有N行。總共劃分成為M x N個方格。接著輸入M列，每列包含N個數字，兩個數字間以一個空白隔開，這些數字有3種可能：5代表炸彈偵測器、1代表炸彈、0代表空地。

Output
每筆輸入會有一行輸出，請你輸出可以被偵測到及無法偵測到的炸彈數量，中間用一個空白隔開。

Sample Input
2
3 3
0 0 0
0 0 1
0 5 0
4 4
5 0 0 0
0 1 1 0
0 0 0 0
5 1 0 0

Sample Output
1 0
2 1
*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y, total = 0, boom = 0;
        cin >> x >> y;
        int a[x + 2][y + 2];
        for (int j = 0; j < x + 2; j++)
            for (int k = 0; k < y + 2; k++)
                a[j][k] = 0;
        for (int j = 1; j < x + 1; j++)
            for (int k = 1; k < y + 1; k++) {
                cin >> a[j][k];
                if (a[j][k] == 1)
                    total += 1;
            }
        for (int j = 1; j < x + 1; j++)
            for (int k = 1; k < y + 1; k++)
                if (a[j][k] == 5)
                    for (int l = j - 1; l <= j + 1; l++)
                        for (int m = k - 1; m <= k + 1; m++)
                            if (a[l][m] == 1) {
                                boom += 1;
                                a[l][m] = 0;
                            }
        cout << boom << " " << total - boom << endl;
    }
}