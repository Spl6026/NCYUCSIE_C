/*
請寫一個程式，輸入3個數字a, b, c,請輸出一個等差數列,從a開始，等差為b，輸出c個。

For example:

Input
1 1 5

Result
1 2 3 4 5
*/

#include <iostream>
using namespace std;
int main() {
    double a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<c;i++){
        cout<<a<<" ";
        a = a+b;
    }
    cout<<endl;
}