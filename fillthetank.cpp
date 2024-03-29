#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#include<queue>
long long isPossible(long long supply, vector<vector<long long>> &adj, int start, int *cap, vector<int> &visited)
   {
       queue<pair<int,long long>> Q;
       Q.push({start, supply});
       while(!Q.empty())
       {
           pair<int, long long> front = Q.front();
           Q.pop();
           
           int node = front.first;
           long long water = front.second - cap[node-1];
           if(water<0) return 0;
           visited[node-1] = 1;
           long long branches = 0;
           for(int i = 0;i<adj[node].size();i++)
           {
               int newNode = adj[node][i];
               if(!visited[newNode-1])
                   branches++;
           }
           
           if(branches > 0) water = water / branches;
           if(water<0) return 0;
           
           for(int i = 0;i<adj[node].size();i++)
           {
               int newNode = adj[node][i];
               if(!visited[newNode-1])
               {
                   Q.push({newNode, water});
               }
           }
       }
       return 1;
   }
   
   long long minimum_amount(vector<vector<int>> &Edges, int num, int start, int *cap){
      // Code here
      long long low = 0;
      long long high = 1e18;
      
      vector<vector<long long>> adj;
      
      for(int i = 0;i<=num;i++)
      {
          vector<long long> tmp;
          adj.push_back(tmp);
      }
      for(int i = 0;i<Edges.size();i++)
      {
          adj[Edges[i][0]].push_back(Edges[i][1]);
          adj[Edges[i][1]].push_back(Edges[i][0]);
      }
      
      for(int i = 0;i<num;i++)
      {
          low = low + cap[i];
      }
      long long ans = 0;
     while(low<=high)
     {
         vector<int> visited;
         visited.clear();
         for(int i = 0;i<num;i++)
         {
             visited.push_back(0);
         }
         long long mid = low + (high - low)/2;
          
         if(isPossible(mid, adj, start, cap, visited))
         {
             ans = mid;
             high = mid - 1;
         }
         else
         {
             low = mid + 1;
         }
     }
     if(ans==0) return -1;
      return ans;
   }