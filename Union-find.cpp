#include<iostream>
using namespace std;

class Solution
{
    public:
    //Function to merge two nodes a and b.
    
    int findPar(int a , int par[])
    {
        if(a == par[a])
        {
            return a;
        }
        return par[a] = findPar(par[a],par);
    }
    void union_( int a, int b, int par[], int rank1[]) 
    {
        //code here
        a = findPar(a,par);
        b = findPar(b,par);
        
        if(rank1[a] < rank1[b])
        {
            par[a] = b;
        }
        else if(rank1[b] < rank1[a])
        {
            par[b] = a;
        }
        else
        {
            par[b] = a;
            rank1[a]++;
        }
        
    }
    
    //Function to check whether 2 nodes are connected or not.
    bool isConnected(int x,int y, int par[], int rank1[])
    {
        //code here
        return findPar(x,par) == findPar(y,par); 
    }
};


