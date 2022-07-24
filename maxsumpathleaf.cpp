#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
#include<queue>
struct Node
{
	int data;
	struct Node *left, *right;
};

int maxPathSum(Node* root)
    {
        //code here
        if(root==NULL){
            return 0;
        }
        int l=maxPathSum(root->left);
        int r=maxPathSum(root->right);
        return root->data+max(l,r);
    }