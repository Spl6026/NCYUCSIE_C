/*
請你判斷某數是否為質數。

Input
輸入多行，每行會有一個整數num(1<num<2147483648)。

Output
每行輸出一個字元，若為合數，輸出n；反之，輸出p。

Sample Input
2
4
11
20

Sample Output
p
n
p
n
*/

#include <iostream>
using namespace std;
int main(){
    long long int a;
    while(cin>>a) {
        int n=0;
        for (int i = 2; i < a; i++)
            if (a % i == 0) {
                n = 1;
                break;
            }
        if (n == 1)
            cout << "n" << endl;
        else
            cout << "p" << endl;
    }
}