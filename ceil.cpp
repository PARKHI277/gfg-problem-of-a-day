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
void bfs(Node * root, vector<int>&v){
    if ( root == NULL ) return;
    v.push_back(root->data);
    if (root->left) bfs(root->left,v);
    if (root->right) bfs(root->right,v);
}

int findCeil(Node* root, int input) {
    if (root == NULL) return -1;
    vector<int>v;
    int s = 0;
    bfs(root,v);
    sort(v.begin(),v.end());
    for (int i = 0; i<v.size(); i++){
        if (v[i]==input) return input;
        if (v[i]>input){
            s= i;
            break;
        }
    }
    return v[s];
}