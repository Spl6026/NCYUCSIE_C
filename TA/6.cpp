/*
輸入數行數字，請計算每行數字的總合

input:
1 2 3 4 5
5 5 6 6

output:
15
22
*/

#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    while(getline(cin,a)){
        int s = 0;
        string b;
        for(int i=0;i<a.size();i++){
            if(a[i]==' '){
                s = s + stoi(b);
                b.erase();
            }
            else if(i==a.size()-1) {
                b += a[i];
                s = s + stoi(b);
            }
            else
                b+=a[i];
        }
    cout<<s<<endl;
    }
}