#include<bits/stdc++.h>
using namespace std;
int n, a[101] = {0}, s[101] = {0};
//用数组的每一位表示一个数字
void change(int x){
    int g = 0;
    for (int i = 100; i >= 0;i--){
        a[i] = a[i] * x + g;
        g = a[i] / 10;
        a[i] = a[i] % 10;
    }
}
//高精求和
void qh(){
    int g = 0;
    for (int i = 100; i >= 0;i--){
        s[i] = s[i] + a[i] + g;
        g = s[i] / 10;
        s[i] = s[i] % 10;
    }
}
//输出s[i]中的数
void sc(){
    int w;
    for (int i=0; i <= 100;i++){
        if(s[i]!=0){
            w = i;
            break;
        }
    }
    for (int i = w; i <= 100;i++){
        cout << s[i];
    }
}
int main(){
    cin >> n;
    s[100] = a[100] = 1;
    for (int i = 2; i <= n;i++){
        change(i);
        qh();
    }
    sc();
    return 0;
}