/*
每行輸入兩個向量，每個向量包含三個整數，請計算這兩向量的內積與平行四邊形面積的平方。
前三個數是第一個向量，後三個數是第二個向量。

備註：上傳時僅需上傳函式的部分就好!! main函式的部分不須上傳，平台上已預設好main函式的內容。

僅需上傳開始~結束的部分
//開始
int Dot(int a, int b, int c, int A, int B, int C){
//Your code
}
int Area(int a, int b, int c, int A, int B, int C){
//Your code
}
//結束

Sample Input
1 -1 1 1 1 -1

Sample Output
Dot = -1
Area = 8
*/

/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <iostream>
using namespace std;

int Dot(int,int,int,int,int,int);

int Area(int,int,int,int,int,int);

int main() {
    int a,b,c,A,B,C;  
    while(cin>>a>>b>>c>>A>>B>>C){  
        cout<<"Dot = "<<Dot(a, b, c, A, B, C)<<endl;
        cout<<"Area = "<<Area(a, b, c, A, B, C)<<endl;
    }
} 

/* PRESET CODE END - NEVER TOUCH CODE ABOVE*/

int Dot(int a, int b, int c, int A, int B, int C){
    return a*A+b*B+c*C;
}
int Area(int a, int b, int c, int A, int B, int C){
    return (a*B-b*A)*(a*B-b*A)+(b*C-c*B)*(b*C-c*B)+(c*A-a*C)*(c*A-a*C);
}