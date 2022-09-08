/*
輸入兩個非零正整數，請求出兩數的最大公因數。

備註：上傳時僅需上傳函式(HCF)的部分就好!! main函式的部分不須上傳，平台上已預設好main函式的內容。

Sample Input
1 2
2 4

Sample Output
1
2
*/

/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <iostream>
using namespace std;

void HCF(int,int);

int main() {
    int a,b;
    while(cin >> a >> b){
        HCF(a,b);
    }
} 

/* PRESET CODE END - NEVER TOUCH CODE ABOVE*/

void HCF(int n,int m){
    int a=1;
    while (a != 0) {
        a = n % m;
        n = m;
        m = a;
    }
    cout<<n<<endl;
}