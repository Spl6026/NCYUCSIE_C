/*
請定義一個 struct 名為 coordinate，包含其 x軸和 y軸。

請寫以下function:

coordinate findMax(int n, coordinate[]):n表示總共幾個座標，回傳全部的座標中離原點最近的座標，如果有相同距離則index越大的優先。

void printCoordinate(coordinate):請輸出傳入的座標，輸出格式為"{x軸} {y軸}"(大括號內為變數，之間用空格隔開，請忽略""{})，並換行。



輸入格式:

第一行有一個n(n <= 100)表示總共有幾個座標，接下來有n行，每行有2個整數分別為x, y(-1000 <= x, y <= 1000)。



輸出格式:

"{x軸} {y軸}"(大括號內為變數，之間用空格隔開，請忽略""{})，並換行。詳見範例。



Note:只需繳交function部分!

For example:

Test
int n;
    cin >> n;
    coordinate co[100];
    for(int t = 0;t < n; t++){
        cin >> co[t].x >> co[t].y;
    }
    coordinate Max = findMax(n, co);
    printCoordinate(Max);

Input
5
2 1
-2 1
-1 -2
0 5
3 9

Result	
-1 -2
*/

struct coordinate{
    int x;
    int y;
    int sum;
};

coordinate findMax(int n, coordinate co[]){
    int min=co[0].x * co[0].x + co[0].y * co[0].y;
    int index;
    for(int i=0;i<n;i++){
        co[i].sum = co[i].x * co[i].x + co[i].y * co[i].y;
        if(co[i].sum <= min){
            min = co[i].sum;
            index = i;
        }
    }
    return co[index];
}

void printCoordinate(coordinate Max){
    cout<<Max.x<<" "<<Max.y<<endl;
}