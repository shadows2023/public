#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, long long n) {
        if(n<0){
            n=-1*n;
            x=1.0/x;
        }
        double ans=1;
        while(n){
            if(n&1)//n转换成2进制与0001的与运算，即判断最后一位是不是1
            {
                ans=ans*x;
            }
            x=x*x;
            n>>=1;//n向右1位，删去最后一位
        }
        return ans;
    }
};