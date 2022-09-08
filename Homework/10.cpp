/*
輸入兩個非負整數，代表二十四小時制的時針與分針，請計算時針與分針相差的角度，四捨五入到小數點第一位。

備註：上傳時僅需上傳函式(Degree)的部分就好!! main函式的部分不須上傳，平台上已預設好main函式的內容。

Sample Input
0 0
3 0
4 30
6 0

Sample Output
0.0
90.0
45.0
180.0
*/

/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <iostream>
#include <iomanip>
using namespace std;

double Degree(int, int);

int main() {
    int a, b;
    while(cin >> a >> b){
        cout << fixed << setprecision(1) << Degree(a,b) << endl;
    }
} 

/* PRESET CODE END - NEVER TOUCH CODE ABOVE*/

double Degree(int n, int m){
    double a,b,c;
    a = n%12;
    b = m;
    a = (a+(b/60)) * 30;
    b = b * 6;
    c = abs(a-b);
    if (c>180)
        c = 360 - c;
    return c;
}