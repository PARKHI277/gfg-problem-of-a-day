#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
 int M = 1000000007;
    vector<vector<long long int>> multi(vector<vector<long long int>> &a, vector<vector<long long int>> &b) {
        vector<vector<long long int>> c = {{0,0},{0,0}};
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                for(int k = 0; k < 2; k++) {
                    c[i][j] += ((a[i][k]%M)*(b[k][j]%M))%M;
                }
            }
        }
        return c;
    }

    int FindNthTerm(long long int n) {
        vector<vector<long long int>> mat = {{1,1},{1,0}};
        vector<vector<long long int>> res = {{1,1},{1,0}};
    
        while(n) {
            if(n%2 == 1) 
                res = multi(mat,res);
    
            mat = multi(mat,mat);
            n = n>>1;
        }
        return res[0][1]%M;
    }