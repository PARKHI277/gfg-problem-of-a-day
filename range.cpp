#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;


	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		map<int,int>m;
		for(int i = A ;i<=B;i++)
		{
		    m[i] = 1;
		}
		for(int i = 0 ;i<n;i++)
		{
		    if(m.count(arr[i]))
		    {
		        m.erase(arr[i]);
		    }
		}
		if(m.empty())
		{
		    return true;
		}
		return false;
	}