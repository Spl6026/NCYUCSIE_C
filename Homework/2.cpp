/*
第一行給你1個整數(>=0)表示時間(單位：sec)，請你換算成"00hr 00min 00sec"的格式。
第二行給你3個整數(>=0)，分別為day、hr、min，請你換算成單位時間為min。

Sample Input
400 0 1 2

Sample Output
0hr 6min 40sec
62
*/

#include <iostream>
using namespace std;
int main() {
    int s, m, h, d;
    cin>>s>>d>>h>>m;
    cout<<s/3600<<"hr "<<s%3600/60<<"min "<<s%60<<"sec"<<endl;
    cout<<d*24*60+h*60+m<<endl;
    return 0;
}