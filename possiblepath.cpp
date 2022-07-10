#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
#include<queue>
 vector<vector<int>>ans;

  void helper(int n,int m,int i,int j ,vector<vector<int>> grid,vector<int>a)
  {
        if(i>=n or j>=m)
          return ;
        
        if(i==n-1 and j==m-1 )
        {
            a.push_back(grid[i][j]);
            ans.push_back(a);
            return ;
        }
        a.push_back(grid[i][j]);
        if(i<n-1 and j==m-1)
        {
            helper(n,m,i+1,j,grid,a);
        }
        else if(i==n-1 and j<m-1)
        {
               helper(n,m,i,j+1,grid,a);
        }
        else
        {
        helper(n,m,i+1,j,grid,a);
        helper(n,m,i,j+1,grid,a);
        }
    }
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        // code here
        vector<int>a;// n and m are size of matrix
        helper(n,m,0,0,grid,a);
        return ans;
        
    }