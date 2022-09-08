/*
OO大學想要統計學生的資料，並利用科系進行查詢，依照姓名印出他們的資料。請你利用struct的方式，儲存這些學生的資料。
 
Input
一開始會有兩個正整數n、m(1<=n,m<=100)，n代表全校有幾個學生，m代表有幾筆查詢指令。
之後每行為一筆資料，有n行，每一行為學生的個人資訊，學生的個人資訊格式為姓名、學號、科系、年級、電話。這些資訊會用逗號隔開。除了年級為正整數外，其餘為字串，所有的字串長度皆不會超過40。
並且將電話改成固定的格式，若是行動電話"0912-345678"或"0912345678"等(以09開頭)，改成"0912-345678"，第4個數後面加"-"，其餘視為室內電話"02-3456-789"或"(02)3456-789"等，並改成"023456789"。除數字之外的符號有'('、')'、'-'。
保證不會有同姓名的情況，英文大小寫需注意且視為不同，大寫字典順序在小寫前面。
從第n+2行開始輸入的資料為科系或*，若輸入科系的沒有學生資料則輸出None，否則列出這些學生的資料，*表示要列出所有學生的資料。
 
Output
在每筆查詢的前面要加上一行"Case k:"，k表示第幾筆的查詢
每筆資料的輸出格式如下：
----------------------------------------
<學號> <姓名>
Department: <科系>
Grade: <年級>
Phone: <電話>
每筆資料輸出之前及結束都必須先輸出40個 '-' 符號。"<" 和">" 符號顯示每個資訊需輸出的位置。請注意空白。
 
Sample Input
5 3
John Wang,0111,CS,1,0912345678
Ada,9111,CS,2,0224862486
Alice,9131,BME,2,0912-345987
Helena,0121,Information Management,1,0987-654-321
jack,0123,CS,1,(03)654-9870
CS
Information
*
 
Sample Output
Case 1:
----------------------------------------
9111 Ada
Department: CS
Grade: 2
Phone: 0224862486
----------------------------------------
0111 John Wang
Department: CS
Grade: 1
Phone: 0912-345678
----------------------------------------
0123 jack
Department: CS
Grade: 1
Phone: 036549870
----------------------------------------
Case 2:
None
Case 3:
----------------------------------------
9111 Ada
Department: CS
Grade: 2
Phone: 0224862486
----------------------------------------
9131 Alice
Department: BME
Grade: 2
Phone: 0912-345987
----------------------------------------
0121 Helena
Department: Information Management
Grade: 1
Phone: 0987-654321
----------------------------------------
0111 John Wang
Department: CS
Grade: 1
Phone: 0912-345678
----------------------------------------
0123 jack
Department: CS
Grade: 1
Phone: 036549870
----------------------------------------
*/

/*----------------沒過----------------*/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

struct student {
    string name, number, department, grade, phone;
};

void phone(string &s) {
    string a;
    for (int i = 0; i < s.length(); i++)
        if (s[i] != '-' && s[i] != '(' && s[i] != ')')
            a += s[i];
    if (a[1] == '9')
        a.insert(4, "-");
    s = a;
}

int main() {
    int n, m;
    cin >> n >> m;
    cin.ignore();
    student stu[n];
    for (int i = 0; i < n; i++) {
        string s;
        stringstream ss;
        getline(cin, s);
        ss << s;
        getline(ss, stu[i].name, ',');
        getline(ss, stu[i].number, ',');
        getline(ss, stu[i].department, ',');
        getline(ss, stu[i].grade, ',');
        getline(ss, stu[i].phone);
        phone(stu[i].phone);
    }

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j <= m; j++)
            if (stu[i].name > stu[j].name) {
                student t;
                t = stu[i];
                stu[i] = stu[j];
                stu[j] = t;
            }

    for (int i = 1; i <= m; i++) {
        bool check = false;
        string s;
        getline(cin, s);
        cout << "Case " << i << ":" << endl;
        for (int j = 0; j < n; j++)
            if (stu[j].department == s || s == "*") {
                cout << "----------------------------------------" << endl;
                cout << stu[j].number << " " << stu[j].name << endl;
                cout << "Department: " << stu[j].department << endl;
                cout << "Grade: " << stu[j].grade << endl;
                cout << "Phone: " << stu[j].phone << endl;
                check = true;
            }
        if (check)
            cout << "----------------------------------------" << endl;
        else
            cout << "None" << endl;
    }
}