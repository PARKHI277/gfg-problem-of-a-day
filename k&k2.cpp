#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
#include<queue>

long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        // sort the array
        sort(A,A+N);
        int sum = 0;
        int i  = K1;
        int j  = K2-1;
        while(i<j)
        {
            sum = sum + A[i];
            i++;
        }
        
        return sum;
    }