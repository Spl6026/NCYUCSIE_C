/*
有一天，小明在做英文閱讀測驗，但發現他有很多單字都沒有看過，於是，他決定自己製作一個單字表，這個單字表會照著輸入順序做排序，因為單字實在太多了，小明有可能會不小心放入相同的單字，不過不需要特別刪除它，接著，他有兩種查詢方式，第一種，他會輸入一個字元作為字首，然後要列出所有的字首為輸入字元的單字，大小寫視為相同，第二種，輸入一個數字N（ 0 < N ），印出在單字表中第N個的單字，如果以上兩種方式沒有找到單字，則需印出"error"。

請使用vector。


Input

輸入一堆單字，均是英文大小寫字母，每個單字以空個分開，直到輸入-1結束。接著可以重複輸入一個數字M，如果M等於1，小明使用第一種方式查詢，再輸入一個字元，如果M等於2，小明會使用第二種方式查詢，再輸入一個數字，如果M等於0，小明將結束查詢。

Output

當小明選擇用第一種方式查詢，則要印出所有字首與輸入相同的單字，大小寫視為相同，依照輸入的順序輸出，輸出格式為兩個單字中間以逗號及空白隔開，當小明選擇用第二種方式查詢，印出單字表中第N個單字，若使用其中一種方式找不到單字，則需輸出"error"，每次輸出後要換行。

For example:

Input
I found a love for me
Darling just dive right in and follow my lead
Well I found a girl beautiful and sweet
Oh I never knew you were the someone waiting for me
Cause we were just kids when we fell in love
Not knowing what it was
I will not give you up this time -1
1 s
1 d
2 6
1 w
1 z
0

Result	
sweet, someone
Darling, dive
me
Well, were, waiting, we, were, when, we, what, was, will 
error
*/

#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    vector<string> a;
    string t;
    while(cin>>t&&t!="-1")
        a.push_back(t);
    int n;
    while(cin>>n&&n!=0){
        vector<string> b;
        if(n==1){
            bool find = false;
            char m;
            cin>>m;
            for(unsigned int i=0;i<a.size();i++)
                if(toupper(a[i][0])==toupper(m)){
                    b.push_back(a[i]);
                    find = true;
                }
            if(find){
                for(unsigned int i=0;i<b.size()-1;i++)
                    cout<<b[i]<<", ";
                cout<<b[b.size()-1]<<endl;
            }
            else
                cout<<"error"<<endl;
        }
        if(n==2){
            unsigned int m;
            cin>>m;
            if(m<=a.size())
                cout<<a[m-1]<<endl;
            else
                cout<<"error"<<endl;
        }
    }
}
