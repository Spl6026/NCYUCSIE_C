/*
寫一個程式，若輸入的數為偶數則輸出 1，否則輸出 0。

For example:

Input
20

Result
1
*/

#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a%2==0)
        cout<<1;
    else
        cout<<0;
    return 0;
}