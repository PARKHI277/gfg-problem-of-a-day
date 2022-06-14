#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<bits/stdc++.h>

// 13 june 
	int isRepeat(string s)
	{
	    // Your code goes here
	    int n = s.length();
	    for(int i = 1;i<=n/2;i++)// parse only half
	    {
	        string x = s.substr(0,i);// ababab -> a
	        if(n%i == 0)
	        {
	            int m = n/i - 1;// 5
	            string y = x; // a
	            while(m--)
	            {
	                x = x + y;// 
	            }
	            if(x == s)
	            {
	                return 1;
	            }
	            
	        }
	    }
	}