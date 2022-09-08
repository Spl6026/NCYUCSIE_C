/*
Write a program that uses the function isPalindrome given in Example 6-6 (Palindrome). 
Output "TRUE" OR "FALSE" if the string is palindrome or not.
Test your program on the following strings: "madam"， "abba", "22", "67876", "444244", and "trymeuemyrt".

Note that there are several strings in one test!

For example:

Input
madam
abba
22
67876
444244
trymeuemyrt

Result	
TRUE
TRUE
TRUE
TRUE
FALSE
TRUE
*/

#include <iostream>
using namespace std;
int main(){
    string a;
    while(cin>>a){
        int n;
        int m=0;
        n = a.length()-1;
        for(int i=0;i<=n/2;i++)
            if(a[i]!=a[n-i])
                m=1;
        if(m==0)
            cout<<"TRUE"<<endl;
        else
            cout<<"FALSE"<<endl;
    }
}