/*
給你一行包含許多字元的句子，請你依照以下步驟撰寫一個程式：
1. 當兩個非空白字元中出現的空白鍵數量為偶數時，移除所有空白。若為奇數，則留下一個空白。
2. 對非數字的字元(串)進行複製，複製數量為字元(串)前面的數字。例如："1apple"和"1a2p1le0ee"的結果均為"apple"。數字可能為0或大於9的數。"2apple"的結果為"appleapple"。
3. 對該句子進行豬拉丁，規則：以子音或其他字元開頭的句子，將子音或其他字元移到句尾，再加上"ay"；以母音開頭的句子，則直接在句尾加上"ay"。中間要加上"-"。例如："This is"->"is is-Thay"，"is"->"is-ay"。

Input
每筆測資有多行輸入，每行輸入均為字元。
範例輸入中，以"~"代替空白顯示，實際測試資料仍為空白。

Output
每筆測資有多行輸出，每行輸入執行完成後即輸出。輸出條件如上敘述。

Sample Input
1This~~~1i~~s~a~a2p1le.
1is~~~1i~~s~a~a2p1le.

Sample Output
is is a apple.-Thay
is is a apple.-ay
*/

/*----------------沒過----------------*/

#include <iostream>
#include <string>

using namespace std;

int space(string &str) {
    string a;
    int i = 0;
    while (i != str.length()) {
        if (str[i] == ' ') {
            int c = 0;
            for (int j = i; j < str.length(); j++) {
                if (str[j] != ' ') {
                    i = j - 1;
                    break;
                } else
                    c += 1;
            }
            if (c % 2 == 1)
                a += ' ';
        } else if (str[i] != ' ')
            a += str[i];
        i++;
    }
    str = a;
}

int number(string &str) {
    string n = "1234567890";
    string a;
    int m;
    int i = 0;
    while (i != str.length()) {
        if(str[i]=='0')
            str.erase(i+1,1);
        if (n.find(str[i]) != string::npos) {
            string t;
            for (int j = i; j < str.length(); j++) {
                if (n.find(str[j]) == string::npos) {
                    i = j - 1;
                    break;
                } else
                    t += str[j];
            }
            m = stoi(t);
            for (int j = 1; j < m; j++)
                a += str[i + 1];
        } else
            a += str[i];
        i++;
    }
    str = a;
}

int main() {
    string str;
    string m = "AEIOUaeiou";
    while (getline(cin, str)) {
        string v;
        string c;
        space(str);
        number(str);
        for (int i = 0; i < str.find(' '); i++) {
            if (m.find(str[i]) == string::npos) {
                c += str[i];
            } else
                break;
        }
        if (c.length() != 0) {
            v = str.substr(c.length());
            cout << v << "-" << c << "ay" << endl;
        } else
            cout << str << "-ay" << endl;
    }
}