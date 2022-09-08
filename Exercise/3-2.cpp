/*
假設空汙指標<35為舒適(Pleasant)，介於35~60之間為不舒服(Unpleasant)，>60則有害健康(Health Hazard)。請依輸入之空汙指數輸出對應之情況。

For example:

Input
20

Result
Pleasant
*/

#include <iostream>
using namespace std;
int main(){
    int a=0;
    cin>>a;
    if(a<35)
        cout<<"Pleasant"<<endl;
    else if(a>=35&&a<=60)
        cout<<"Unpleasant"<<endl;
    else
        cout<<"Health Hazard"<<endl;
}