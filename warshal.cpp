#include<bits/stdc++.h>
#define V 4
using namespace std;
void transitiveClosure(int graph[V][V])
{
    for(int k=0;k<V;k++)
    {
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                graph[i][j]=(graph[i][j]||(graph[i][k]&&graph[k][j]));
            }
        }
    }
    cout<<"The warshal algorithm is "<<endl;
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
    int graph[V][V]={{0,1,0,0},
                 {0,0,0,1},
                 {0,0,0,0},
                 {1,0,1,0}};
    transitiveClosure(graph);
    return 0;
}