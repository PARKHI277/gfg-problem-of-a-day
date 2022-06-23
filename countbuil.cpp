#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<bits/stdc++.h>

int MOD = 1e9 + 7;
	long long int fun(int N,vector<int>&dp)
	{
	    if(N<=0)
	    {
	        return 1;
	    }
	    if(dp[N] != -1)
	    {
	        return dp[N];
	    }
	    return dp[N] = (fun(N-2,dp)%MOD + fun(N-1,dp)%MOD)%MOD;
	}
	int TotalWays(int N)
	{
	    // Code here
	    vector<int>dp(N+1,-1);
	    long long int res = fun(N,dp);
	    return (res%MOD*res%MOD)%MOD;
	    
	}