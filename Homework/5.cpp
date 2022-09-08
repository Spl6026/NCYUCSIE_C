/*
請寫一個程式輸入2個整數，分別為西元年和月份，請輸出該月總共有幾天。

simple input:
1997 3

simple output:
31
*/

#include <iostream>
using namespace std;
int main(){
    int y,m;
    cin>>y>>m;
    switch(m){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        cout<<31<<endl;
        break;
    case 4: case 6: case 9: case 11:
        cout<<30<<endl;
        break;
    case 2:
        if (y%4==0 && y%100!=0 || y%400==0)
            cout<<29<<endl;
        else
            cout<<28<<endl;
    }
}