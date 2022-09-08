/*
寫一個程式，輸入全班學生各科成績，計算每個學生的總平均及各科全班學生平均成績，並找出各科成績中最高的學生。
輸入第一行為兩個正整數n,m(1<=n, m<=20)，代表有n個學生與m個科目。接下來會有n行，每一行會有一個學生的英文名字與m個成績。
輸出將會有n+2m行，前n行輸出每個學生的英文名字與總成績平均。第n+1~n+m行該科目的平均成績。第n+m+1~n+2m行輸出該科目中成績最高的學生的名字與成績，若成績最高的學生有兩個以上則輸出名字較早出現的學生。
成績必須四捨五入到整數。

For example:

Input
3 4
Alice 30 40 50 60
Bob 60 70 10 20
Cindy 90 80 40 20

Result	
Alice 45
Bob 40
Cindy 58
60
63
33
33
Cindy 90
Cindy 80
Alice 50
Alice 60
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    string a[n];
    int b[n][m];
    for(int i=0;i<n;i++){
            cin>>a[i];
        for(int j=0;j<m;j++)
            cin>>b[i][j];
    }
    for(int i=0;i<n;i++){
        double sum = 0;
        cout<<a[i]<<' ';
        for(int j=0;j<m;j++)
            sum += b[i][j];
        cout<<(int)((sum/m)+0.5)<<endl;
    }
    for(int i=0;i<m;i++){
        double sum = 0;
        for(int j=0;j<n;j++)
            sum += b[j][i];
        cout<<(int)((sum/n)+0.5)<<endl;
    }
    for(int i=0;i<m;i++){
        int large = 0;
        int p;
        for(int j=0;j<n;j++)
            if(b[j][i]>large){
                large = b[j][i];
                p = j;
            }
        cout<<a[p]<<' '<<large<<endl;
    }
}
