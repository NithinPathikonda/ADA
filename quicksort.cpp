#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int l,int h)
{
    int i=l;
    int j=h;
    int pivot=a[l];
    while(i<j)
    {
        do{
            i++;
        }while(a[i]<=pivot);
        do{
            j--;
        }while(a[j]>pivot);
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[j],a[l]);
    return j;
}
void quicksort(int a[],int l,int h)
{
    if(l<h)
    {
        int j=partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }   
}
int main()
{
    int n;
    cout<<"Enter the number of Elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quicksort(a,0,n);
    cout<<"The Elements after sorting is "<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl;
    return 0;

}
