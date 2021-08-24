#include<iostream>
#include<algorithm>
using namespace std;

void swap(int *a, int *b)
{
	int temp; 
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[],int l,int h)
{   
    // cout<<l<<h<<endl;
    int pivot=arr[l];
    int lb=l;
    int ub=h;
    while(lb<ub)
    {
        do
        {
            lb++;
        }while(arr[lb]<=pivot);
       
        
        while(arr[ub]>pivot)
        {
            ub--;
        }
        // cout<<"lb "<<lb<<" ub:"<<ub<<endl;
        if(lb<=ub)
        {
            swap(&arr[lb],&arr[ub]);
        }
    
    }
     swap(&arr[l],&arr[ub]);
    return ub;
}
void quicksort(int arr[],int l,int h)
{   
    int pos;
    if(l<h)
    {
    pos=partition(arr,l,h);
    // cout<<"pos:"<<pos<<endl;
    quicksort(arr,l,pos-1);
    quicksort(arr,pos+1,h);
    }
}

int main()
{
    int *arr;
    int n;
    cout<<"enter total element to be inserted in array:";
    cin>>n;

    arr=new int[n];
    int temp;
    for(int i=0;i<n;i++)
    {cin>>arr[i];
    }
    cout<<"numbers inside the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    int l=0;
    int h=n-1;
    quicksort(arr,l,h);
    cout<<"sorted array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}