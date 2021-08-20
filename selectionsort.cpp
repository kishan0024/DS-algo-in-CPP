#include<iostream>
using namespace std;

void selection(int a[],int n)
{
    int i,j,index;

    for(i=0;i<n-1;i++)
    {
        index=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[index])
         {
             index=j;
         }
        }
        swap(a[index],a[i]);
    }
    cout<<"sorted array"<<endl;

    for(j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
}

int main()
{
    int n;
    cout<<"enter total number"<<endl;
    cin>>n;
    int *a=new int[n];
    cout<<"enter array:";
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    selection(a,n);
}