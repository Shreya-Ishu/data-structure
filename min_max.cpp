#include<iostream>
using namespace std;
class min_max
{
	public:
		int arr[100],n,min=0,max=0,i,j;
		void get()
		{
			cin>>n;
			for(i=0;i<n;i++)
			{
				cin>>arr[i];
			}
		}
		void logic()
		{
		max=arr[0];
		min=arr[0];	
			for(i=1;i<n;i++)
			{
				if(arr[i]<min)
				{
					min=arr[i];
				}
			}
			cout<<"min"<<min<<endl;
			for(i=1;i<n;i++)
			{
				if(arr[i]>max)
				{
					max=arr[i];
				}
			}
			cout<<"max"<<max;
			
		}
		
 } ;
 int main()
 {
 	min_max m;
 	m.get();
 	m.logic();

 }
