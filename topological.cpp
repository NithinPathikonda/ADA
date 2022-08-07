#include<bits/stdc++.h>
using namespace std;
int g[10][10],in[10],s[10],d[10],top=-1,n;
void topo(int n)
{
    int k=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        in[i]=in[i]+g[j][i];
    }
}
for(int i=0;i<n;i++)
{
    if(in[i]==0)
    {
        s[++top]=i;
    }
}
while(top>=0)
{
    int u=s[top--];
    d[k++]=u;
    for(int i=0;i<n;i++)
    {
        if(g[u][i]==1)
        {
            in[i]=(in[i]-1);
            if(in[i]==0)
            {
                s[++top]=i;
            }
        }
    }
}
    cout<<"the topological traversal"<<endl;
    for(int i=0;i<n;i++)
    {
    cout<<d[i]<<" ";
    }

}
int main()
{
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the adjacency matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>g[i][j];
        }
    }
    topo(n);

    cout<<endl;
    return 0;
}