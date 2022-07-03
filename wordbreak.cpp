#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
public:
    vector<string> ans;
    void helper(map<string,int> m,string s,int index,string temp)
    {
    if(index >= s.size())
    {
        temp.pop_back();
        ans.push_back(temp);
    }
    for(int i = index;i<s.size();i++)
    {
        string str = s.substr(index,i-index+1);
        if(m.find(str) != m.end())
        {
            helper(m,s,i+1,temp+str+" ");
        }
    }
}
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        // code here
        map<string,int> m;
        for(auto i : dict){
            m.insert({i,1});
        }
        helper(m,s,0,"");
        return ans;
    }
};