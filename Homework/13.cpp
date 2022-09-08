/*
在X-Y平面上，選擇一點(x1,y2)當作原點，以此點為中心畫出一條垂直線和一條水平線，並將它分為四個區塊，現在給你另外一點(x2,y2)，請你求出它是否在垂直線或水平線上，若不在線上，那請你算出以兩點為對角的長方形面積。

輸入四個整數，分別為x1, y1, x2, y2，若另一點在原點右上輸出right-up，右下輸出right-down，左上輸出left-up，左下輸出left-down並計算出面積。若在線上則輸出online。

本題僅需繳交兩個函式。
is_not_on_line(parameters)需要輸出right-up...其中一種結果，並回傳布林值。當不在線上時為真，在線上為假。
calu_area(parameters)，請將求出的面積放入指定的參數中。

Sample Input
0 0 0 0
0 0 1 1

Sample Output
online
right-up
1
*/

/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <iostream>
using namespace std;

bool is_not_on_line(int, int, int, int);
void calu_area(int&, int, int, int, int);

int main(){
  int x1, y1, x2, y2;
  while(cin >> x1 >> y1 >> x2 >> y2){
    bool notOnLine = is_not_on_line(x1, y1, x2, y2);
    if(notOnLine){
      int area = 0;
      calu_area(area, x1, y1, x2, y2);
      cout << area << endl;
    }
  }
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE*/

bool is_not_on_line(int x, int y, int a, int b){
    if(a>x&&b>y)
        cout<<"right-up"<<endl;
    else if(a>x&&b<y)
        cout<<"right-down"<<endl;
    else if(a<x&&b>y)
        cout<<"left-up"<<endl;
    else if(a<x&&b<y)
        cout<<"left-down"<<endl;
    else
        cout<<"online"<<endl;
    return a!=x&&b!=y;
}
void calu_area(int &area, int a, int b, int c, int d){
    area = abs(c-a)*abs(d-b);
}