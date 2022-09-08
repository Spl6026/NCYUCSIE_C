/*
找出輸入字串中出現最多次的英文字母，大小寫視為相同。
輸入說明：輸入一段僅由英文字母及空格、換行組成之文字，以 ctrl+z 作為結束。
輸出說明：每筆測資輸出出現最多次的英文字母 (以大寫呈現) 及其出現次數 (以一個空格隔開) 於一行。若出現次數相同，輸出字母序最小的。

For example:

Input
This is a good day I like to go for a walk

Result	
O 5
*/

#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
  string n;
  string t;
  int a[26];
  int max=0;
  char c;
  while(getline(cin,t))
    n += t;
  for(int i=0;i<26;i++)
    a[i]=0;
  for(unsigned int i=0;i<n.length();i++){
    n[i] = toupper(n[i]);
    if(n[i]!=' '){
        a[n[i]-'A']+=1;
        if(a[n[i]-'A']>max)
            max = a[n[i]-'A'];
    }
  }
  for(int i=0;i<26;i++)
    if(a[i]==max){
      c = i+'A';
      cout<<c<<' '<<max<<endl;
      break;
      }
}
