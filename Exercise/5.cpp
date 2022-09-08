/*
請寫一個程式，輸入2個數字a, b，如果a = 1 則輸出，邊長為b的空心正方形，如果a = 2 則輸出邊長為b的空心菱形(見範例)

For example:

Input
1 5

2 5

Result	
*****
*   *
*   *
*   *
*****

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
*/

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a==1){
        if(b==1)
            cout<<"*"<<endl;
        else{
        for(int i=0;i<b;i++)
            cout<<"*";
        cout<<endl;
        for(int i=1;i<b-1;i++) {
            cout << "*";
            for (int j = 1; j < b - 1; j++)
                cout << " ";
            cout << "*" << endl;
        }
        for(int i=0;i<b;i++)
            cout<<"*";
    }}

    if(a==2){
        if(b==1)
            cout<<"*"<<endl;
        else{
        for(int i=1;i<b;i++)
            cout<<" ";
        cout<<"*"<<endl;
        for(int i=b-1;i>0;i--){
            for(int j=1;j<i;j++)
                cout<<" ";
            cout<<"*";
            for(int j=0;j<b*2-(i*2+1);j++)
                cout<<" ";
            cout<<"*"<<endl;
        }
        for(int i=2;i<b;i++){
            for(int j=1;j<i;j++)
                cout<<" ";
            cout<<"*";
            for(int j=0;j<b*2-(i*2+1);j++)
                cout<<" ";
            cout<<"*"<<endl;
        }
        for(int i=1;i<b;i++)
            cout<<" ";
        cout<<"*"<<endl;
    }}
}