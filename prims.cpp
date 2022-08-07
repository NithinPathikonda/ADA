#include<bits/stdc++.h>
using namespace std;
#define V 5
int mini=0;
int minInd(int dis[],bool set[])
{
    int minind,min=INT_MAX;
    for(int i=0;i<V;i++)
    {
        if(dis[i]<=min && set[i]==false)
        {
            min=dis[i];
            minind=i;
        }
    }
    return minind;
}
void printmst(int graph[V][V],int parent[V])
{
    for(int i=1;i<V;i++)
    {
        cout<<parent[i]<<"-"<<i<<"\t"<<graph[parent[i]][i]<<endl;
        mini +=graph[parent[i]][i];

    }
}
void prims(int graph[V][V])
{
    int dis[V];
    bool set[V];
    int parent[V];
    for(int i=0;i<V;i++)
    {
        parent[i]=-1;
        set[i]=false;
        dis[i]=INT_MAX;
    }
    dis[0]=0;
    for(int count=0;count<V-1;count++)
    {
        int u=minInd(dis,set);
        set[u]=true;
        for(int i=0;i<V;i++)
        {
        if(set[i]==false && graph[u][i] && dis[i]>graph[u][i])
        {
            dis[i]=graph[u][i];
            parent[i]=u;
        }
        }
    }
    printmst(graph,parent);
}
int main()
{
    int graph[5][5]={   { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };
    prims(graph);
    cout<<"Mini cost is"<<mini<<endl;
    return 0;
}