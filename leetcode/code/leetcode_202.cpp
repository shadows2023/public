#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int get_next(int number){
	    int total=0;
        while(number){
            int num=number%10;
            total+=num*num;
            number/=10;
        }
        return total;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=get_next(n);
        while(fast!=1 && slow!=fast){
            slow=get_next(slow);
            fast=get_next(get_next(fast));
        }
        return fast==1;
    }
};