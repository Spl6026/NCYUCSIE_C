/*
輸入3個整數a,b,c，計算"(b^2-4ac)/7"的值，輸出四捨五入到整數的結果。

Sample Input
2 4 1

Sample Output
1
*/

#include <iostream>
using namespace std;
int main() {
    double a,b,c;
    cin>>a>>b>>c;
    cout<<(int)(((b*b)-(4*a*c))/7+0.5)<<endl;
    return 0;
}