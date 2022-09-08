/*
利用遞迴計算階層
會有多筆輸入

input:
1
2

output:
1
2
*/

#include <iostream>
using namespace std;

int n(int a){
    if(a==1)
        return 1;
    else
        return n(a-1)*a;
}

int main(){
    int a;
    while(cin>>a)
        cout<<n(a)<<endl;
}