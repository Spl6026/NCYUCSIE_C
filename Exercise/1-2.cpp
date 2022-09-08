/*
給定2個整數a, b，請分別輸出 2a - b 和 (5a + b) / 2

For example:

Input
1 1

Result
1
3
*/

#include <iostream>
using namespace std;
int main(){
    float a,b;
    cin>>a>>b;
    cout<<(2*a)-b<<endl<<((5*a)+b)/2<<endl;
    return 0;
}