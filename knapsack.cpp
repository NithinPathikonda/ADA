#include<bits/stdc++.h>
using namespace std;
void knapsack(int W,int n,int wt[],int v[])
{
 int dp[n+1][W+1];
 for(int i=0;i<=n;i++)
 {
    for(int j=0;j<=W;j++)
    {
        if(i==0 || j==0)
        {
            dp[i][j]=0;
        }
        else if(wt[i]<= j)
        {
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-wt[i]]+v[i]);
        }
        else{
            dp[i][j]=dp[i-1][j];
        }
    }
 }  
 for(int i=0;i<=n;i++)
 {
    for(int j=0;j<=W;j++)
    {
        cout<<dp[i][j]<<" ";
    }
    cout<<endl;
}
}
int main()
{
int n,W;
    cout<<"Enter the value of 'n' "<<endl;
    cin>>n;
    cout<<"Enter the max weight"<<endl;
    cin>>W;
     int dp[n+1][n+1];
    int wt[n],v[n];
    // wt[]={2,3,1,4};
    // v[]={ 4,5,3,7};
    cout<<"ENter the weights "<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>wt[i];
    }
    cout<<"ENter the values"<<endl;
    for(int j=1;j<=n;j++)
    {
        cin>>v[j];
    }
    knapsack(W,n,wt,v);
    return 0;
}