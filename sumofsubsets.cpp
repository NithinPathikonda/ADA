#include<bits/stdc++.h>
using namespace std;
int flag=0;
void combinations(int ind,int max,int n,int a[],vector<int> &dp)
{
    if(max==0)
    {
        flag=1;
        for(int i=0;i<dp.size();i++)
        {
            cout<<dp[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=ind;i<n;i++)
    {
        if(a[i]>max) break;
        dp.push_back(a[i]);
        combinations(i+1,max-a[i],n,a,dp);
        dp.pop_back();
    }
}
int main()
{
    vector<int> dp;
    int max,n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements "<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the Maxi"<<endl;
    cin>>max;
    combinations(0,max,n,a,dp);
    return 0;
}
// int weights[] = {15, 22, 14, 26, 32, 9, 16, 8};
//     int target = 53;