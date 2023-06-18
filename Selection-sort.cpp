#include<iostream>
using namespace std;

void selection(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int i,n;
	cout<<"enter size of tha array "<<endl;
	cin>>n;
	int arr[n];
	for (i=0;i<n;i++)
	{
		cout<<"enter a number "<<endl;
		cin>>arr[i];
	}
	selection(arr,n);
	print(arr,n);
}