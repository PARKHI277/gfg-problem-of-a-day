#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
#include<queue>
vector<int> reaching_height(int n, int a[]) {
    // Complete the function
   sort(a,a+n);
    int i=0;int j=n-1;int k=0;
    vector<int>ans(n,0);
    int sum=0;
    while(i<=j){
        if(k%2==0){
            ans[k]=a[j];
            sum+=ans[k];
            j--;
        }else{
            ans[k]=a[i];
            sum-=ans[k];
            i++;
        }
        k++;
    }
    if(sum==0)
        return {-1};
    else
        return ans;
}