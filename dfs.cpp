#include<bits/stdc++.h>
using namespace std;
int g[10][10],v[10],s[10],n;
    int top=-1;
void dfs(int src)
{
    v[src]=1;
    for(int i=0;i<n;i++)
    {
        if(g[src][i]==1 && v[i]==0)
        {
            s[++top]=i;
            dfs(i);
        }
    }
}
int main()
{
    cout<<"Enter the number of nodes "<<endl;
    cin>>n;
    cout<<"Enter the adjacency matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>g[i][j];
        }
    }
    s[++top]=0;
    dfs(0);
    if(top==n-1)
    {
        cout<<"The graph is connected"<<endl;
    }
    else
    {
        cout<<"The graph is not connected"<<endl;
    }
}