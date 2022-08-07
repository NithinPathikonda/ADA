#include<iostream>
using namespace std;
int i,j,a,b,u,v,ne=1,n;
int g[10][10],parent[10],mincost=0;
int mini;
int find(int i)
{
    while(parent[i])
    {
        i=parent[i];
    }
    return i;
}
int uni(int i,int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}
int main()
{
  cout<<"Enter the number of vertices"<<endl;
  cin>>n;
  cout<<"Enter the cost adjacency matrix"<<endl;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
        cin>>g[i][j];
        if(g[i][j]==0)
        {
            g[i][j]=999;
        }
    }
  }  
  cout<<"The edges of minimum cost spanning tree are"<<endl;
  while(ne<n)
  {
  for(i=0,mini=999;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
        if(g[i][j]<mini)
        {
            mini=g[i][j];
            a=u=i;
            b=v=j;
        }
    }
  }
  u=find(u);
  v=find(v);
  if(uni(u,v))
  {
    cout<< ne++ << "  edge  " << a << "-" << b <<" " <<mini<<endl;
    mincost+=mini;
  }
  g[a][b]=g[b][a]=999;
  }
  cout<<"mincost "<<mincost<<endl;


}