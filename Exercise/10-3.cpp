/*
某次小考有20題是非題，因學生太多需要你寫一個程式來幫忙改考卷。答對的題目得5分，答錯的倒扣3分，未作答的得0分。成績90以上為A，80-89為B，70-79為C，60-69為D，0-59為F。
輸入第一行為由20個T和F組成之字串，表示標準答案，之後會有一個正整數n(1<=n<=100)表示會有n個學生。接下來的n行每行為一個學生的資料，先輸入學號，之後有一個空格，之後為學生的答案。未答的題目以空格表示。
輸出每個學生的學號及成績和等第，成績最低為0。

For example:

Input
TFFTFFTTTTFFTFTFTFTT
2
ABC54301 TFTFTFTT TFTFTFFTTFT
ABC54302 TFFTFFTTTTFFTFTFTF T

Result	
ABC54301 23 F
ABC54302 95 A
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    int n;
    cin>>a>>n;
    string s[n][2];
    for(int i=0;i<n;i++){
        cin>>s[i][0];
        cin.ignore();
        getline(cin, s[i][1]);
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<20;j++){
            if(s[i][1][j]==' ')
                sum+=0;
            else if(a[j]==s[i][1][j])
                sum+=5;
            else
                sum-=3;
        }
        char c;
        if(sum>=90)
            c='A';
        else if(sum>=80)
            c='B';
        else if(sum>=70)
            c='C';
        else if(sum>=60)
            c='D';
        else
            c='F';
        if(sum<0)
            sum=0;
        cout<<s[i][0]<<' '<<sum<<' '<<c<<endl;
    }
}
