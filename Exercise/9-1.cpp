/*
輸入兩個長度為n的向量，計算內積後輸出
輸入格式：第一行為一個正整數n代表每個向量的長度。之後兩行各有n個整數，每個整數間有一個空格，分別代表兩個向量的各元素。
輸出格式：輸出這兩個向量的內積
其中n <= 1000

For example:

Input
5
1 2 3 4 5
5 4 3 2 1

Result	
35
*/

#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int b[n];
int sum = 0;
for(int i=0;i<n;i++)
    cin>>a[i];
for(int i=0;i<n;i++)
    cin>>b[i];
for(int i=0;i<n;i++)
    sum = a[i] * b[i] + sum;
cout<<sum<<endl;
}