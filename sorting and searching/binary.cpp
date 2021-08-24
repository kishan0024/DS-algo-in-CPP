#include<iostream>
using namespace std;

int binarysearch(int a[],int n,int key)
    {   
    int lb=0;
    int ub=n;

     while(lb<=ub)
     {
        int mid=(ub+lb)/2;
        // cout<<mid<<endl;
        if(key==a[mid])
        {
            return mid;
        }
         if(a[mid]>key)
         {
             ub=mid-1;
         }
         else 
         {
             lb=mid+1;
         }
     }
    return -1;
}

int main()
{
    int n,i,key;
    cout<<"enter total number of arrey"<<endl;
    cin>>n;
    int *a=new int[n];

    cout<<"enter elements"<<endl;
    for(i=0;i<n;i++)
    {   cout<<"a["<<i+1<<"]=";
        cin>>a[i];
    }
    cout<<"enter key which is to be found:";
    cin>>key;

   int answer=binarysearch(a,n-1,key);
    if(answer==-1)
    {
        cout<<"element not  found"<<endl;
    }
    else
    {
        cout<<"element found at:"<<answer<<" position"<<endl;
    }

return 0;
}