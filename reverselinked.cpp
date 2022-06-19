#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<bits/stdc++.h>

    void reverse(Node * begin,Node* end)
    {
        Node*prev = NULL, *curr = begin->next,*first=curr;
        while(curr != end)
        {
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        begin->next = prev;
        first->next = end;
    }
    Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
        if(n == m)
        {
            return head;
        }
        Node * dummy = new Node(-1);
        dummy->next = head;
        
        Node*first = dummy;
        Node*last = head;
        int i = 1,j=1;
        while( i!= m)
        {
            i++;
            first = first->next;
        }
        while(j != n)
        {
            j++;
            last = last->next;
        }
        reverse(first,last->next);
        return dummy->next;
        
        
    }