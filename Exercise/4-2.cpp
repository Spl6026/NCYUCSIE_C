/*
寫一個程式可不斷輸入2個數字，並用*輸出上下底為此數字的梯形，每個梯形之間請輸出10個-來區別。

For example:

Input
2 5
3 2

Result
**
***
****
*****
----------
***
**
*/

#include <iostream>
using namespace std;
void abc(int a, int b){
    if((b-a)>0){
        for (int i = 0; i <= b - a; i++) {
            for (int j = 0; j < i + a; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    if((b-a)<0){
        for (int i = a; i >= b; i--) {
            for (int j = 0; j < i ; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
}

int main() {
    int a,b;
    cin>>a>>b;
    abc(a,b);
    while(cin>>a>>b){
        cout<<"----------"<<endl;
        abc(a,b);
    }
}