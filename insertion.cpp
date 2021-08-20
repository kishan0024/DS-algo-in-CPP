#include <chrono>
#include<iostream>
#include<vector>
#include <algorithm>
#include<ctime>
using namespace std::chrono;
using namespace std;

void insertion_sort(vector<int> &a)
{   
    int temp,j;


    for (int i = 1; i < a.size(); i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
           j--;
        }
        a[j+1]=temp;
    }
   
}
int main()
{
    std::chrono::time_point<std::chrono::system_clock> start, end;
    vector<int> arr;
    
    int n;
    
    cout<<"enter how many values you want to enter:";
    
    cin>>n;
    
    int temp;
     start = std::chrono::system_clock::now();
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
     end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
   
 
   
   
    insertion_sort(arr);

   
  
    std::cout << "finished computation at " << std::ctime(&end_time)
              << "elapsed time: " << elapsed_seconds.count() << "s\n";

    cout<<"------------sorted array------"<<endl;
   for(int i=0;i<arr.size();i++)
   {
       cout<<arr[i]<<" "<<endl;
   }


}