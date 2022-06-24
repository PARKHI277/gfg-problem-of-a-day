#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


class Solution{
public:
    char profession(int level, int pos){
        // code here
        if(pos == 1)
        {
            return 'e';
        }
        char parent = profession(level-1,(pos+1)/2);
        char curr = parent;
        if(pos%2 == 0)
        {
            curr ^= 'e' ^ 'd';
        }
        
        return curr;
    }
};


