#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

class Solution {
    
    int countSetBits(int n) {
        int setBits = 0;
        while(n) {
            setBits += n & 1;
            n >>= 1;
        }
        return setBits;
    }
    
  public:
    int minVal(int a, int b) {
        // code here
        int setBits_a = countSetBits(a), 
            setBits_b = countSetBits(b),
            flips = setBits_a - setBits_b;
        
        
        while(flips > 0) {
            a &= (a-1); 
            flips--;
        }

        while(flips < 0) {
            a = ~(~a & (~a-1)); 
            flips++;
        }
        
        return a;
    }
};