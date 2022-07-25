#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

 vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
        // Code here
         vector<int> dist(V,1e8);
       vector<int> visited(V,0);
       dist[S]=0;
       for(int i=0;i<V-1;i++)
       {
           for(auto it : adj)
           {
               int u=it[0];
               int v=it[1];
               int w=it[2];
               if(dist[v]> (dist[u]+w))
               dist[v]=dist[u]+w;
           }
       }
       return dist;
    }