/*
給定一球體半徑，請輸出球體體積，並無條件捨去到小數點後第3位。(另pi為3.1415926)

提示: 體積為 (4/3)* pi * r2

For example:

Input
3

Result
37.699
*/

#include <iostream>
#include<cstdio>
using namespace std;
int main(){
    double r;
    cin>>r;
    r =3.1415926 * r * r;
    r = r * 4 / 3;
    r = r -0.0005;
    printf("%.3f\n", r);
    return 0;
}
