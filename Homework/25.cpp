/*
建議使用2維vector練習。
小名在家發現有100個螞蟻洞，他想要觀察今天第k隻螞蟻進入第i個洞，以及第i個洞中有多少隻螞蟻，保證這些螞蟻進去後就不會再出來。

Input
第一行輸入三個數n,m,num，接著要輸入n+m(0<n,m<10000)行，num(0<num<101)表示螞蟻洞的數量。
第2 ~ n+1行(主要為寫資料)，每行有兩個正整數，前者為螞蟻編號k，後者為洞編號i，表示第k(0<k<10000)隻螞蟻進入第i(0<i<num+1)個洞，
第n+2 ~ n+m+2行(主要為查資料)，每行有兩個正整數，前者為洞編號，後者為進入第i個洞的第幾隻螞蟻(進入順序)，並印出該隻螞蟻的編號。

Output
輸出m行，每行為第i個洞的第幾個進入的螞蟻的編號。若不存在則輸出error。
接著輸出一行，包括每個洞的螞蟻數量，中間以空白隔開，結束後換行。

Sample Input
6 4 5
111 1
222 3
333 5
555 1
444 1
666 5
2 1
3 1
1 3
5 1

Sample Output
error
222
444
333
3 0 1 0 2
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, num;
    cin >> n >> m >> num;
    vector<int> v[num + 1];
    for (int i = 0; i < n; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        v[t2].push_back(t1);
    }
    for (int i = 0; i < m; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        if (v[t1].size() >= t2)
            cout << v[t1][t2 - 1] << endl;
        else
            cout << "error" << endl;
    }
    for (int i = 1; i < num; i++)
        cout << v[i].size() << " ";
    cout << v[num].size() << endl;
}