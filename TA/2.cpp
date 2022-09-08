/*
請寫一個程式判斷判斷3個不同長度的邊能不能湊成一個三角形，如果能輸出YES，如果不能輸出NO

simple input1:
3 4 5

simple output1:
YES

simple input2:
1 1 10

simple output2:
NO
*/

#include <iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if ((a+b)>c && (a+c)>b && (b+c)>a)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}