#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
#include<queue>


  int canReach(int A[], int N) {
        // code here
        int l = N-1; // 5
        for(int i = N-2;i>=0;i--)
        {
            if(i+A[i] >= l)
            {
                l = i; // 4
            }
        }
        
        if(l == 0)
        {
            return 1;
        }
        return 0;
    }