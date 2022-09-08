/*
讀入一篇文章，輸出全文共有幾行，每個字母各出現幾次(依字母排序)，大小寫視為相同。除字母外其餘均不計算。

For example:

Input
Hello, my name is Ted.
Nice to meet you.
How do you do?
I'm fine thank you.

Result	
4
A 2
C 1
D 3
E 7
F 1
H 3
I 4
K 1
L 2
M 4
N 4
O 8
S 1
T 4
U 3
W 1
Y 4
*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
string a;
char c;
int n=0;
int v[26] = {0};
while(getline(cin,a)){
    n++;
    for(unsigned int i=0;i<a.length();i++){
        a[i] = toupper(a[i]);
        if(a[i]>='A'&&a[i]<='Z')
            v[a[i]-'A']+=1;
        }
    }
cout<<n<<endl;
for(int i=0;i<26;i++){
    c = i+'A';
    if(v[i]!=0)
        cout<<c<<' '<<v[i]<<endl;
    }
}