#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void heapify(int a[],int n,int i)
{
    int root=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n && a[left]>a[root])
    {
        root=left;
    }

    if(right<n && a[right]>a[root])
    {
        root=right;
    }

    if(root!=i)
    {
        swap(a[i],a[root]);
        heapify(a,n,root);
    }
}

void heapsort(int a[],int size)
{

    for(int i=(size/2)+1;i>=0;i--)
    {
        heapify(a,size,i);
    }

    for (int i = size- 1; i > 0; i--) {
        
        swap(a[0], a[i]);
 
        // call max heapify on the reduced heap
        heapify(a, i, 0);
    }
}

int main()
{
    int n;
    cout<<"enter total array elements:";
    cin>>n;
    int *a=new int[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    heapsort(a,n);


    cout<<"sorted array:"<<endl;
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
}