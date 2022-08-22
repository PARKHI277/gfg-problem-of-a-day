#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<bits/stdc++.h>


void immediateSmaller(int *arr, int n) {
	    //  code here
	   for(int i=0; i<n; i++)
	   {
           if(i!=n-1)
           {
               if(arr[i]>arr[i+1])
               {
                   arr[i]=arr[i+1];
               }else
               {
                   arr[i]=-1;
               }
           }
           else
           {
               arr[i]=-1;
           }
       }
   
	    
	}