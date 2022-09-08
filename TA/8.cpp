/*
Problem Description
 
對一個連續函數f(x)，若f(r)=0，則r是f的根。
對於a<b，若f(a)*f(b)<0，則在(a,b)區間內必有一根，此為勘根定理。
我們可以用二分法來找到一個近似根。
本題假設f是一個多項式次數不超過P。
在程式實作上，限撰寫一個函數來計算f的值
Double f(int p, double x, double c[]); 其中c是傳入函數的係數。
給定a<b，且f(a)*f(b)<0，我們求其平均值x=(a+b)/2，計算f(x)的值，如果f(a)*f(x)<0則把區間縮小為(a,x)；
如果f(x)*f(b)<0則把區間縮小為(x,b)。
如此繼續下去值到達到要求的精準位數。
在浮點數的計算中，我們不可以= =0來判別，因此本題假設在絕對數值<0.000001時，當作0。
 
Input Format
 
第一行是測資筆數T。
每筆測資三行：
第一行是一個整數P代表多項式的次數，P<=6。
第二行有P+1個浮點數分別是由高而低的係數。
第三行兩個浮點數 a與 b。
 
Output Format
 
每筆測資輸出介於a與b之間的根，四捨五入到小數點以下第5位。

Sample Input:
2
1
1.0 -1.0
-1 2
2
1 0 -2
0 2

Sample Output:
1.00000
1.41421
*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double f(int p, double a, double b, double c[]) {
    if(b<a){
        double t = b;
        b = a;
        a = t;
    }
    double x = (a + b) / 2;
    double suma = 0, sumb = 0, sumx = 0;
    for (int i = 0; i <= p; i++) {
        suma += c[p-i] * pow(a,i);
        sumb += c[p-i] * pow(b,i);
        sumx += c[p-i] * pow(x,i);
    }
    if(abs(sumx)<0.000001)
        return x;
    if(suma*sumx<0)
        return f(p,a,x,c);
    if(sumx*sumb<0)
        return f(p,x,b,c);
}


int main() {
    int r;
    cin >> r;
    for (int i = 0; i < r; i++) {
        int p;
        cin >> p;
        double array[p + 1];
        for (int j = 0; j <= p; j++)
            cin >> array[j];
        double a, b;
        cin >> a >> b;
        cout<<setprecision(5)<<fixed<<f(p, a, b, array)<<endl;
    }
}