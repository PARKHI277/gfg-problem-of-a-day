#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<bits/stdc++.h>

// 10june
int maxCoins(int A[], int B[], int T, int N) {
        // code here
        if(T== 0 || N==0)
        {
            return 0;
        }
        int ans = 0; // max coin
        
        priority_queue<pair<int,int>>pq;
        
        for(int i = 0;i<N;i++)
        {
            int coins = B[i];
            int plate = A[i];
            pq.push({coins,plate});
        }
        
        while(T != 0)
        {
            int no_of_coins = pq.top().first;
            int total_plates = pq.top().second;
            pq.pop();
            
            for(int i = 0;i<total_plates;i++)
            {
                if(T == 0)
                 break;
                 ans = ans + no_of_coins;
                 T--;
            }
            
            if(pq.empty())
              break;
        }
        
        return ans;
    }