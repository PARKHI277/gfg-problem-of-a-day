#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<bits/stdc++.h>

bool DFSisBipartite(int node, vector<int> adj[], vector<bool> &visited, vector<int> &color)

    {

        visited[node] = true;

        

        for (auto nbr : adj[node])

        {

            if (!visited[nbr])

            {

                color[nbr] = !color[node];     

                if (!DFSisBipartite(nbr, adj, visited, color))

                    return false;

            }

            else

            {

                if (node != nbr && color[node] == color[nbr])       

                    return false;

            }

        }

        return true;

    }

    

 

bool isBipartite(int V, vector<int>adj[]){

   

   vector<bool> visited(V , 0) ;   

   vector<int> color(V , 0) ;     

   

   for(int i=0 ; i<V ; i++)

   {

       if( !visited[i] )

       {

           if( !DFSisBipartite( i , adj , visited , color) ) 

               return false ; 

       }

   }

   return true ; 

}