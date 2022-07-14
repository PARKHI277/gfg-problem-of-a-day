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

 vector<pair<int,Node*>>v;
    static bool cmp(const pair<int, Node*> &a, const pair<int, Node*> &b)
    {
        return a.first > b.first;
    }
    void dfs(struct Node* root)
    {
        if(root == NULL)
        {
            return;
        }
        v.push_back({root->data,root});
        dfs(root->left);
        dfs(root->right);
    }
    void transformTree(struct Node *root)
    {
        //code here
        dfs(root);
        sort(v.begin(),v.end(),cmp);
        int sum = 0;
        for(auto &e : v)
        {
            e.second->data = sum;
            sum += e.first;
        }
        
    }