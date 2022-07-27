#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

 int minOperations(int arr[], int n, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i = 0;i<n;i++)
        {
            pq.push(arr[i]); // 1 10 12 9 2 3
        }
        int ans = 0;
        while(pq.size()>1)
        {
            if(pq.top() >= k)
            {
                break;
            }
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            pq.push(a+b);
            ans++;
        }
        
        return ans;
    }