#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n=nums.size(),cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i] != nums[j]&&nums[i] != nums[k]&&nums[j] != nums[k]){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};