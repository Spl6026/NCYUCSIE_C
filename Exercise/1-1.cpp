/*
輸入長方形的長寬，並分別輸出周長和面積。

For example:

Input
2 3

Result
10
6
*/

#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    cout<<2*(x+y)<<endl<<x*y<<endl;
    return 0;
}