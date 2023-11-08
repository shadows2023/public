#include<bits/stdc++.h>
using namespace std;
class Problem{
    public:
        vector<int> binaryAddition(vector<int> vec1,vector<int> vec2){
        int n = vec1.size();
        vector<int> res(n+1);
        int temp = 0, sum;
        for (int i = n; i >= 1;i--){
            sum = (vec1[i - 1] + vec2[i - 1] + temp) % 2;
            temp = (vec1[i - 1] + vec2[i - 1] + temp) / 2;
            res[i] = sum;
        }
        if(temp!=0){
            res[0] = temp;
        }
        return res;
    }
};