#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
#include<queue>
#include<stack>

stack<int> _push(int arr[],int n)
{
   // your code here
   int res = INT_MAX;
   stack<int>s;
   for(int i = 0;i<n;i++)
   {
       res = min(res,arr[i]); 
       s.push(res);  
   }
   return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
}