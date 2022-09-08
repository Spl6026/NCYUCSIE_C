/*
小明是嘉義大學的系辦助理，今天是開學的第一天，他知道每個班級學生人數不相同，因此在某一間教室，他至少需要準備多少張桌椅，才夠每位學生有自己的一張桌椅，某一間教室一個時間只會有一個班級使用。

Input
每行輸入多個正整數，表示一組測資，最後以0表示該行結束。
可能會有多行，最後一行也以0表示結束程式。
(看不懂的可以先看範例測資qwq)。

Output
每行會輸出一個數，表示最少桌椅的數量。
最後一行不用輸出。

Sample Input
22 33 44 55 0
5 6 7 5 7 0
0

Sample Output
55
7
*/

#include <iostream>
using namespace std;
int main(){
    int a,b,n;
    do {
        a=b;
        n=0;
        while (cin >> a && a != 0) {
            if (a >= n)
                n = a;
        }
        cout<<n<<endl;
    }while(cin>>b&&b!=0);
}