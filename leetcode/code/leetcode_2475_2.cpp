#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0,n=nums.size();
        for(int i=0, j=0; i<n ; i=j){
            while(j<n && nums[i]==nums[j]){
                j++;
            }
            cnt+=i*(j-i)*(n-j);
        }
        return cnt;
    }
};