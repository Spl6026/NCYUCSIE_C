/*
請你根據年月日印出月曆。
此題為練習函式及全域變數的使用，請你完成並上傳input()及printCalender()兩個函式。
在input()中完成輸入，並將數值存放到四個全域變數中。
在printCalender()中完成輸出，第一行的 " Year: Month: "在main已經輸出，就不需要在輸出一次。
另外，因不強迫使用這個函式isLeapYear()，所以沒有用這個函式的，請在上繳檔案時加上一行程式碼 " bool isLeapYear(){return true;} "。

注意：需根據年月來決定印出的天數，但不需考慮日期與星期的真實性。

Input
輸入一個正整數，表示接下來有幾筆輸入。
每筆輸入四個正數數，分別表示某年、某月、某日、某日是星期幾。
星期一至星期日分別用數字1~7表示。

Output
輸出請依照範例輸出的格式。
因顯示有誤差，有將輸出的範例檔案放在輔助教學平台第11周。

Sample Input
1
2021 12 2 4

Sample Output
Year: 2021 Month: 12
-------------------------------------------
| Sun | Mon | Tue | Wed | Thu | Fri | Sat |
| | | | 1 | 2 | 3 | 4 |
| 5 | 6 | 7 | 8 | 9 | 10 | 11 |
| 12 | 13 | 14 | 15 | 16 | 17 | 18 |
| 19 | 20 | 21 | 22 | 23 | 24 | 25 |
| 26 | 27 | 28 | 29 | 30 | 31 | |
-------------------------------------------
*/

/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int global_year; //某年
int global_month; //某月
int global_day; //某日
int global_dayOfTheWeek; //某日是星期幾

void input();
bool isLeapYear();
void printCalender();

int main() {
    int T;
    cin >> T;
    while(T--){
        input();

        printf("      Year: %d       Month: %d\n", global_year, global_month);

        printCalender();
    }
} 

/* PRESET CODE END - NEVER TOUCH CODE ABOVE*/

void input() {
    cin >> global_year >> global_month >> global_day >> global_dayOfTheWeek;
}
bool isLeapYear(int n) {
    return (n % 4 == 0 && n % 100 != 0) || n % 400 == 0;
}
void printCalender() {
    int m = global_dayOfTheWeek - (global_day % 7) + 1;
    int d, l, c = 0, f = 0;
    m = m < 0 ? m + 7 : m;
    m = m > 6 ? m - 7 : m;
    switch (global_month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            d = 31;
            break;
        case 2:
            d = isLeapYear(global_year) ? 29 : 28;
            break;
        default:
            d = 30;
            break;
    }
    l = (m + d - 1) / 7 + 1;
    cout << "-------------------------------------------" << endl << "| Sun | Mon | Tue | Wed | Thu | Fri | Sat |" << endl;
    for (int i = 0; i < l; i++) {
        cout << '|';
        for (int j = 0; j < 7; j++) {
            if (j == m)
                f = 1;
            if (f == 1 && c != d) {
                c++;
                cout << right << setw(4) << c << " |";
            } 
            else
                cout << "     |";
        }
        cout << endl;
    }
    cout << "-------------------------------------------" << endl;
}