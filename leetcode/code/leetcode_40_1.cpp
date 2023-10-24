#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, long long n) {
        if(n<0){
            n=-1*n;
            x=1.0/x;
        }
        if(n==0){
            return 1.0;
        }
        else if(n%2==1){
            return myPow(x,n-1)*x;
        }
        else{
            double temp=myPow(x,n/2);
            return temp*temp;
        }
    }
};