#include<iostream>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

int  fibonacci(ll int n)
{
	if(n==0 || n==1)
	return n;
	else
	return fibonacci(n-1)+fibonacci(n-2);
	
}
int main()
{
	int n;
	cout<<"enter total element of fibonnaci series:";
	cin>>n;
	int i=0;
	auto start = std::chrono::steady_clock::now();
	while(i<n)
	{
		cout<<fibonacci(i)<<endl;
		i++;
		}
		
	auto end = std::chrono::steady_clock::now();
    double duration = (duration_cast<microseconds>(end - start)).count();
    cout<<endl<<"time take is :"<<duration<<endl;
	return 0;
}
