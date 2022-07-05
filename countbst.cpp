#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>


    int getCount(Node *root, int l, int h)
    {
        if(root==NULL){
            return 0;
        }
        if(root->data>=l && root->data<=h){
            return 1+getCount(root->right,l,h)+getCount(root->left,l,h);
        }
        else if(root->data<l){
            return getCount(root->right,l,h);
        }
        else if(root->data>h){
            return getCount(root->left,l,h);
        }
    }

