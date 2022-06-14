#include<iostream>
using namespace std;
#include<vector>
#include<queue>

// -- 14 june--- learnt about trial numbers in this problem
bool check(int mid ,int n)
       {
           int temp = mid;
           int count = 0;
           int a = 5;
           while(a<=temp)
           {
               count = count + temp/a;
               a = a*5;
               
           }
           
           return (count>=n);
       }
        int findNum(int n)
        {
        //complete the function here
        if(n == 1)
        {
            return 5;
        }
        
        // trialing zero = count of 5s in prime factor of x!
        int low = 0;
        int high = 5*n;
        
        while(low<high)
        {
            int mid = (low+high)>>1;
            if(check(mid,n))
            {
                high = mid;
            }
            else
            {
                low = mid+1;
            }
        }
        return low;
       }