#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
#include<queue>

  int countMin(string s){
    //complete the function here
    string a = s;
        reverse(a.begin(),a.end());
        int n = s.size();
        
        vector<vector<int>> dp(n+1, vector<int> (n+1,0));
        
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(s[i-1] == a[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else 
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
        
        return n - dp[n][n];
    }