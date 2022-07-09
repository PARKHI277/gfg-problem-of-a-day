#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
#include<queue>

struct Node
{
    int coeff;
    int pow;
    struct Node* next;
    
    Node(int c, int p){
        coeff = c;
        pow = p;
        next = NULL;
    }
    
};


Node* addPolynomial(Node *p1, Node *p2)
    {
        Node*head=new Node(0,0);
       Node*temp=head;
       while(p1!=NULL && p2!=NULL){
           if(p1->pow>p2->pow){
               temp->next=p1;
               p1=p1->next;
           }
           else if(p1->pow<p2->pow){
               temp->next=p2;
               p2=p2->next;
           }
           else{
               p1->coeff+=p2->coeff;
               temp->next=p1;
               p1=p1->next;
               p2=p2->next;
           }
           temp=temp->next;
       }
       if(p1)
       temp->next=p1;
       if(p2)
       temp->next=p2;
       return head->next;
    }