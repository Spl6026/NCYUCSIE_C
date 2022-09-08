/*
給你三個整數，前兩個數字代表一個分數，分別為分母、分子，第三個數字表示你的輸出結果要印到第幾位數，並且無條件進位。

Sample Input 1
1 3 5

Sample Output 1
0.33334

Sample Input 2
4 2 2

Sample Output 2
2.00
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double a,b,c;
    double d = 0.5;
    cin>>a>>b>>c;
    for(int i=0;i<c;i++)
        d = d * 0.1;
    cout<<fixed<<setprecision(c)<<(a/b)+d<<endl;
    return 0;
}