/*
Write a program that prompts the user to input a string.

The program then uses the function substr to remove all the vowels from the string.

For example, if str = "There", then after removing all the vowels, str = "Thr".

After removing all the vowels, output the string.

You program must contain a void function named substr to remove all the vowels and a bool function named isTheVowel to determine whether a character is a vowel.

You must to complete and submit two functions.

For example:

Test
string str;
while(getline(cin, str)){
    substr(str);
    cout << str << endl;
}

Input
There

Result
Thr

*/

bool isTheVowel(char a){
    string n="aeiouAEIOU";
    if(n.find(a)!=string::npos)
        return true;
    else
        return false;
}
void substr(string &str){
    string a;
    for(unsigned i=0;i<str.length();i++){
        if(!isTheVowel(str[i]))
            a+=str[i];
    }
    str = a;
}