 #include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;
}; 
  
 vector<int> diagonal(Node *root)
{
    Node*currNode = root ; 
   if(root==NULL) return {} ;  
   queue<Node*>data;  
   
   vector<int>res;  
   
   while(currNode!=NULL){
       data.push(currNode)  ; 
       currNode=currNode->right;  // going extreme right
   }
   
   while(data.size()!=0){
       
       auto firstNode = data.front()  ; 
       data.pop()  ; 
       res.push_back(firstNode->data)  ;  // inserting node from first
       
       firstNode=firstNode->left;  // if the starting node has left,going for that (new seq. is creating)
    //   if(firstNode->left!=NULL){
    //       data.push(firstNode->left)  ;
    //       firstNode=firstNode->left ;  
    //   }
       
       while(firstNode!=NULL){
           data.push(firstNode)  ;  
           firstNode=firstNode->right; // again going extreme right 
       }
   }
   
   return res; 
}