#include<iostream>
using namespace std;



class merge{
    
    int n;
    int *arr;
    public:
     
    merge(int n1)
    {
        n=n1;
        arr=new int[n1];
    }


    void get_input()
    {
        cout<<"enter array input";
        cout<<endl;

        for(int i=0;i<n;i++)
        {
            cout<<"arr["<<i+1<<"]:";
            cin>>arr[i];
        }
    }

     void display()
    {   cout<<endl<<"sorted array"<<endl;
        // cout<<"enter array input";
        // cout<<endl;

        for(int i=0;i<n;i++)
        {
            cout<<"arr["<<i+1<<"]:";
            cout<<arr[i]<<endl;
        }
    }
    void merging(int low,int mid,int high)
    {
        int n1=mid-low+1;
        int n2=high-mid;
        int i,j;

        int *ar1=new int[n1];
        int *ar2=new int[n2];
        
        for(i=0;i<n1;i++)
        {
            ar1[i]=arr[low+i];
        }

        for(j=0;j<n2;j++)
        {
            ar2[j]=arr[mid+1+j];
        }
        //debugging
        // cout<<low<<" "<<mid<<" "<<high<<endl;
        //  for(i=0;i<n1;i++)
        // {
        //   cout<<ar1[i]<<" ";
        // }
        // cout<<endl;
        // for(j=0;j<n2;j++)
        // {
        //      cout<<ar1[i]<<" ";
        // }
        // cout<<endl;
        //ends
        i=0,j=0;
        int l=low;

        while(i<n1 && j<n2)
        {
            if(ar1[i]>ar2[j])
            {
                arr[low]=ar2[j];
                j++;
            }
            else {
                arr[low]=ar1[i];
                i++;
            }
            low++;
        }


        while(i<n1)
        {
            arr[low]=ar1[i];
            i++;
            low++;
        }

        while(j<n2)
        {
            arr[low]=ar2[j];
            j++;
            low++;
        }

    }

    void mergesort(int low,int high)
    {
       int mid;
       if (low >= high)
        return;

            cout<<"check1";
            mid=low+(high-low)/2;
            // cout<<"indices:"<<low<<" "<<mid<<" "<<high<<endl;
            this->mergesort(low,mid);
            this->mergesort(mid+1,high);
            this->merging(low,mid,high);
      
    }


};

int main()
{
    int n;
    cout<<"enter total number of arrey elements:";
    cin>>n;
    merge *obj=new merge(n);

    obj->get_input();
    // obj->display();
    obj->mergesort(0,n-1);
    cout<<"check";
    obj->display();
}