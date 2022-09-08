/*
Write a program that outputs inflation rates for two successive years and whether the inflation is increasing or decreasing. 

Ask the user to input the current price of an item and its price one year ago. To calculate the inflation rate for a year, subtract the price of the item for that year from the price of the item one year ago and then divide the result by the price a year ago.

Your program must contain at least the following functions: 

a void function to get the input : get_input(current_price, before_price)

a double function to calculate the results : calculate_rate(current_price, before_price)

a void function to output the results which round to two decimal places : print(rate)

Use appropriate parameters to pass the information in and out of the function. Do not use any global variables.



Note that all of the prices are integer.

Only upload function!!

For example:

Test
int current_price, before_price, T;
cin >> T;
while(T--){
    get_input(current_price, before_price);
    print(calculate_rate(current_price, before_price));
}

Input
2
500 200
200 500

Result	
1.50
-0.60
*/

void get_input(int &current_price, int &before_price){
    cin>>current_price>>before_price;
}
double calculate_rate(double current_price, double before_price){
    double n = current_price - before_price;
    n = n / before_price;
    return n;
}
void print(double n){
    cout << fixed << setprecision(2) << n+0.0000001<< endl;
}
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