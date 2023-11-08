#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(auto num:nums){
            hash[num]++;
        }
        int cnt=0,n=nums.size(),t=0;
        for(auto [_,v]:hash){
            cnt+=t*v*(n-t-v);
            t+=v;
        }
        return cnt;
    }
};