#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
#include<queue>
typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;


// A utility function to create a new tree node
Node* newNode( int data )
{
    Node* temp = (Node *)malloc( sizeof( Node ) );
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

class Solution{
    vector<int>v;
    int ind = 0;
public:
    //Function that constructs BST from its preorder traversal.
    Node* post_order(int pre[], int size)
    {
        for(int i=0;i<size;i++)
        {
            v.push_back(pre[i]);
        }
        sort(v.begin(),v.end());
        return fun(pre,0,size-1);
    }
    Node* fun(int pre[],int i,int j)
    {
        if(i>j)
            return NULL;
        Node* root= newNode(pre[ind++]);
        int t=lower_bound(v.begin(),v.end(),root->data)-v.begin();
        root->left=fun(pre,i,t-1);
        root->right=fun(pre,t+1,j);
        return root;
    }
};