#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
struct Node
{
	int data;
    struct Node *next;

    int solve(Node *a, Node *b)
    {
        int cnt = 0;
        while (a and b)
        {
            if (a->data != b->data)
                break;
            cnt++;

        a = a->next;
        b = b->next;
    }
    return cnt;
}
int maxPalindrome(Node *head)
{
   int ans = 0;
   Node* curr = head;
   Node* prev = NULL; Node* next = NULL;
   while(curr){
       next = curr->next;
       curr->next = prev;
       
       ans = max(ans,2* solve(next,prev) + 1);  //odd len
       ans = max(ans,2* solve(next,curr));   //even len
       
       prev = curr;
       curr = next;
   }
   return ans;
}