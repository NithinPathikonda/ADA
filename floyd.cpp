#include<bits/stdc++.h>
using namespace std;
#define INF 999 
#define V 4
void floyd(int graph[V][V])
{
    for(int k=0;k<V;k++)
    {
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
            }
        }
    }
    cout<<"The floyd algorithm is "<<endl;
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            cout<<graph[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    int graph[V][V]={ {0,   5,  INF, 10},
                    {INF,  0,  3,  INF},
                    {INF, INF, 0,   1},
                    {INF, INF, INF, 0} 
                    };
     floyd(graph);
     return 0;
}
