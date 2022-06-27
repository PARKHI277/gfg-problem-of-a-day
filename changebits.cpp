#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#include<queue>

 vector<int> changeBits(int N) {
        // code here
        // N is a decimal number 
        // First we need to find its binary 
        int tmp = N;
        int i = 0;
        int neww = 0;
        while( tmp != 1)
        {
            neww = neww + pow(2,i);
            i++;
            tmp /= 2;
            
        }
        
        neww = neww + pow(2,i);
        int diff = neww - N;
        vector<int>m;
        m.push_back(diff);
        m.push_back(neww);
        return m;
        
    }