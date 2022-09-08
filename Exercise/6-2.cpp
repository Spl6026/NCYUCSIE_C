/*
Modify the function isPalindrome of Example 6-6 so that when determining whether a string is a palindrome, cases are ignored, that is, uppercase and lowercase letters are considered the same.

Note that there are several strings in one test!

For example:

Input
abba
aBbA

Result	
TRUE
TRUE
*/

#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string a;
    while(cin>>a){
        int n;
        int m=0;
        n = a.length()-1;
        for(int i=0;i<=n;i++)
            a[i] = tolower(a[i]);
        for(int i=0;i<=n/2;i++)
            if (a[i] != a[n - i])
                m = 1;
        if(m==0)
            cout<<"TRUE"<<endl;
        else
            cout<<"FALSE"<<endl;
    }
}