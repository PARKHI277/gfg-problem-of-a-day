#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#include<queue>

int countDistinctSubarray(int arr[], int n)
    {
        //code here.
         unordered_map<int,int> mp;
        for(int i=0;i<n;i++)  mp[arr[i]] = 0;
        int disc = mp.size(),i=0,j=0,ans = 0,cc=0; 
        while(j<n)
        {
            while(cc<disc && j<n)
            {
                if(mp[arr[j]] == 0)  mp[arr[j]]++,cc++;
                else mp[arr[j]]++;
                j++;
            }
            while(cc==disc)
            {
                ans+= n-j+1;
                mp[arr[i]]--;
                if(mp[arr[i]]==0)    cc--;
                i++;
            }
        }
        return ans;
    }