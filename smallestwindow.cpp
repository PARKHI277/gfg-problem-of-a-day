// 16 june
#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<bits/stdc++.h>

int findSubString(string str)
   {   
       //if string is of size 1 then minimum length would be 1
       if(str.size()==1)
       {return 1;}
       
       //now count the distinct charcaters
       unordered_map<char,int>m;
       int count=0;
       for(char ch:str){
           if(m.find(ch)==m.end()){
               m[ch]++;
               count++;
           }
       }
       // now i have got number of all distinct cahr in the string
       
       //now we will try to find the minimum length of the window
       int ans=0;
       int curr_count=0;
       int final_ans=INT_MAX;
       unordered_map<char,int>check;
       int i=0,j=0;
       while(i<=j and j<str.size()){
        curr_count++;
        if(check.find(str[j])==check.end()){
          ans++;
        }
        check[str[j]]++;
        //at any point if my ans==count do some work
        if(ans==count){
          //we have found all characters now minimize window
          
           //if window 1st character occur once then we can't further minimize 
          if(check[str[i]]==1){final_ans=min(final_ans,curr_count);}
          else
            {  char temp;
              while(i<=j){
                if(check[str[i]]>1){
                temp=str[i];
                check[temp]--;
                i++;
                curr_count--;
                }
                else{break;}
              }
         final_ans=min(final_ans,curr_count);
        }
        }
        
        j++;
       }
       final_ans=min(final_ans,curr_count);
       return final_ans;
   }