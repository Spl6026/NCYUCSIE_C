/*
小明想要計算一個圓的面積，他的計算機能顯示9個數字，小數點需列入考慮，請你印出小明看到的計算機結果。

輸入為一段英文及數字，請你找出英文字母大寫R後面的數字當成半徑，並計算它的面積，pi=3.14，保證只會出現一次R且輸出數值不會多於9個字元。
輸出格式為 |\\\\\\\\\|，共包含9個反斜線。

Sample Input 1
12R10OK

Sample Output 1
|\\\\\\314|

Sample Input 2
R12.5ABC

Sample Output 2
|\\490.625|
*/

#include <iostream>  
#include <iomanip>  
using namespace std;  
int main() {  
    double r = 0;  
    char c;  
    while(cin>>c&&c!='R');  
    cin>>r;  
    cout<<'|'<<setfill('\\')<<setw(9)<<r*r*3.14<<'|'<<endl;  
}