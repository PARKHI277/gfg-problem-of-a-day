#include<iostream>
using namespace std;
#include<vector>
#include<queue>
    vector <int> nearlySorted(int arr[], int num, int K){
        // Your code here
        priority_queue<int,vector<int>,greater<int>>pq;
        int i ;
        vector<int>ans;
        int n = num;
        for(i = 0;i<=K;i++)
        {
            pq.push(arr[i]);
        }
        ans.push_back(pq.top());
        pq.pop();
        for(i;i<n;i++)
        {
            pq.push(arr[i]);
            ans.push_back(pq.top());
            pq.pop();
        }
        while(!pq.empty())
        {
            ans.push_back(pq.top());
            pq.pop();
        }
        
        return ans;
    }