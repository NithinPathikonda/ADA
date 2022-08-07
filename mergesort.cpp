#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
    {
        L[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=a[m+1+j];
    }
    int i=0,j=0;
    int k=l;
    while(n1>i&&n2>j)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
            k++;
        }
        else if(L[i]>R[j])
        {
            a[k]=R[j];
            j++;
            k++;
        }

    }
    while(n1>i)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(n2>j)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}
void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of numbers "<<endl;
    cin>>n;
    int p[n];
    cout<<"Enter the number of elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    mergesort(p,0,n-1);
    cout<<"Enter the sorted array"<<endl;
    cout<<"Enter the execution of merge sort"<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<p[j]<<" ";
    }
    cout<<endl;
}
