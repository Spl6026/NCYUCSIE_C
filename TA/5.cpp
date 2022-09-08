/*
輸入2個字串，請輸出字串1中總共存在幾個字串2
可重複輸入

input:
this is an apple
an apple

output:
1
*/

#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    string b;
    while (getline(cin,a)) {
        getline(cin, b);
        int n=0;
        for (int i = 0; i < a.size(); i++)
            if (a[i] == b[0]) {
                string c;
                c = a.substr(i, b.size());
                if (c==b)
                    n++;
            }
        cout << n << endl;
    }
}