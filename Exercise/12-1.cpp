/*
Given an array of integers where 1 <= a[i] <= n ( n = size of array ) , some elements appear twice or more and others appear once. Find all the elements of [1,n] inclusive that do not appear in this array ;
Example : 

Simple input : 
4 3 2 7 8 2 3 1 

Simple output：
5
6

For example:

Input
4 3 2 7 8 2 3 1

Result	
5
6
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    int t;
    while(cin>>t)
        a.push_back(t);
    int l=a.size();
    int b[l+1];
    for(int i=0;i<l+1;i++)
        b[i]=0;
    for(int i=0;i<l;i++)
        b[a[i]]=1;
    for(int i=1;i<=l;i++)
        if(b[i]!=1)
            cout<<i<<endl;
}
