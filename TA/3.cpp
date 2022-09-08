/*
請寫一個程式，輸入a, b(皆>0)，輸出 ab mod 10007

simple input:
2 3
7 5

simple output:
8
6800
*/

#include <iostream>
using namespace std;
int main(){
    long long int a,b;
    int c=0;
    while(cin>>a>>b){
    c = a;
    for(int i=1;i<b;i++)
        a=(a*c)%10007;
    cout<<a%10007<<endl;
    }
}