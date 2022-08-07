#include<bits/stdc++.h>
using namespace std;
#define n 6
void print(char q[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<q[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int isSafe(char q[n][n],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        if(q[i][c]=='Q')
        {
            return 0;
        }
    }

    for(int i=r,j=c;i>=0 && j>=0;i--,j--)
    {
        if(q[i][j]=='Q')
        {
            return 0;
        }
    }
    for(int i=r,j=c;i>=0 && j<n;i--,j++)
    {
        if(q[i][j]=='Q')
        {
            return 0;
        }
    }
    return 1;
}
void nqueen(char q[n][n],int r)
{
    if(r==n)
    {
        print(q);
        return;
    }
    for(int i=0;i<n;i++)
    {
    if(isSafe(q,r,i))
    {
        q[r][i]='Q';
        nqueen(q,r+1);
        q[r][i]='_';
    }
    }
}
int main()
{
    char q[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            q[i][j]='_';
        }
    }
    nqueen(q,0);
}