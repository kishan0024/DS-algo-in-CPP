#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=b;
    b=a;
    a=temp;
}
void bubblesort(int a[],int n)
{
    bool flag;
    for(int i=0;i<n-1;i++)
    {   
        flag=false;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag=true;
            }
        }
        if(flag==false)
        {
            break;
        }
    }

    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"enter total elements"<<endl;
    cin>>n;
    int *a=new int[n];
    cout<<"enter elements of array"<<endl;
     for(int i=0;i<n;i++)
    {   cout<<"a["<<i+1<<"]:";
        cin>>a[i];
    }
    bubblesort(a,n);
}