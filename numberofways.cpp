#include<iostream>
using namespace std;

long long int arrangeTiles(int N){
        // code here
        // using dp
        long long int dp[N+1];// 2
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 1;
        dp[4] = 2;
        for(int i = 5;i<=N;i++)
        {
            dp[i] = dp[i-1] + dp[i-4];
        }
        return dp[N];
        
    }