#include<bits/stdc++.h>
using namespace std;
int g[10][10],q[10],v[10],n;
void bfs(int src)
{
    int front=0,rear=-1;    ;
    v[src]=1;
    q[++rear]=src;
    while(front<=rear)
    {
        int u=q[front++];
    for(int i=0;i<n;i++)
    {

        if(g[u][i]==1 && v[i]==0)
        {
            q[++rear]=i;
        }
    }
    }
}
int main()
{
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    cout<<"Enter the adjacency matrix"<<endl;
    for(int i=0;i<n;i++)
  {
   for(int j=0;j<n;j++)
    {
      cin>>g[i][j];
    }
  }
  
  cout<<"your adjacency matrix\n";
 
 for(int i=0;i<n;i++)
  {
   for(int j=0;j<n;j++)
    {
      cout<<g[i][j]<<" ";
    }
    cout<<"\n";
  }

  bfs(0);
  cout<<"The bfs traversal is "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<q[i]<<" ";
  }
  return 0;


}

