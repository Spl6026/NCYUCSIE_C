/*
寫一個程式讀入三個平面上的整數座標，然後印出其中距離原點最遠的點。
如果兩個或多個點，有相同的距離，輸出最先出現的點座標。

For example:

Input
5 5
2 2
1 1

Result
5 5
*/

#include <iostream>
using namespace std;
int main() {
    int x[3];
    int y[3];
    int z[3];
    int c=0;
    for(int i=0;i<3;i++) {
        cin >> x[i] >> y[i];
        z[i] = x[i] * x[i] + y[i] * y[i];
    }
    int m=z[0];
    for(int i=0;i<2;i++)
        if(z[i+1]>m){
            m = z[i+1];
            c = i+1;
        }
    cout<<x[c]<<" "<<y[c]<<endl;
}
