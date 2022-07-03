 #include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

 

class Solution {
    int ans = 0;
    public:
    	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
    	    if(s==d)
    	        return ++ans;
    	    for(int i=0; i<edges.size(); i++){
    	        if(edges[i][0] == s && edges[i][1] == d){
    	            ++ans;
    	        }
    	        if(edges[i][0] == s && edges[i][1] != d){
    	            ans = possible_paths(edges,n,edges[i][1],d);
    	        }
    	    }
    	    return ans;
    	}
};