/*
請寫一個程式輸入c(剪刀)，t(石頭), p(布)，如果前者贏輸出 win ，如果後者贏輸出 lose 如果平手則輸出 no winner

simple input1:
c t

simple output1:
lose

simple input2:
t c

simple output2:
win

*/

#include <iostream>
using namespace std;
int main(){
    char a,b;
    cin>>a>>b;
    if(a=='c'){
        if(b=='t')
            cout<<"lose"<<endl;
        else if(b=='p')
            cout<<"win"<<endl;
        else
            cout<<"no winner"<<endl;
    }
    if(a=='t'){
        if(b=='p')
            cout<<"lose"<<endl;
        else if(b=='c')
            cout<<"win"<<endl;
        else
            cout<<"no winner"<<endl;
    }
    if(a=='p'){
        if(b=='c')
            cout<<"lose"<<endl;
        else if(b=='t')
            cout<<"win"<<endl;
        else
            cout<<"no winner"<<endl;
    }
}