#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hashtable;
        if(s.size()!=t.size()){
            return false;
        }
        int n=s.size();
        for(int i=0;i<n;i++){
            hashtable[s[i]]++;
            hashtable[t[i]]--;
        }
        for(auto it=hashtable.begin();it!=hashtable.end();++it){
            if(it->second!=0){
                return false;
            }
        }
        return true;
    }
};