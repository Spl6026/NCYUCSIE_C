/*
Write a function, reverseDigit, that takes an integer as a parameter and returns the number with its digits reversed. 

For example, 

the value of reverseDigit (12345) is 54321﹔

the value of reverseDigit (5600) is 65﹔

the value of reverseDigit (7008) is 8007﹔

and the value of reverseDigit (-532)  is  -235.



Only upload function!

For example:

Test
int input;
while(cin >> input){
    int reverse_digit = reverseDigit(input);
    cout << reverse_digit << endl;
}

Input
12345
5600
7008
-532

Result	
54321
65
8007
-235
*/

int reverseDigit(int n){
    int c=0;
    if (n<0) {
        n = -n;
        c=1;
    }
    int m=0;
    int k=n;
    int r;

    while (true){
        m++;
        k=k/10;
        if(k==0)
            break;
    }
    int a[m];
    for(int i=0;i<m;i++){
        r=1;
        a[i]=n%10;
        n=n/10;
        for(int j=m-1;j>i;j--)
            r=r*10;
        k = a[i]*r+k;
    }
    if (c==1)
        return -k;
    else
        return k;
}