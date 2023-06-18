#include<iostream>
using namespace std;

void insertionsort(int arr[],int n)
{
	int i,j,x;
	for(i=0;i<n;i++)
	{
		j=i-1;
		x=arr[i];
		while(j>-1&&arr[j]>x)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=x;
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
	for(i=0;i<n;i++)
	{
		cout<<"enter a number "<<endl;
		cin>>arr[i];
	}
	insertionsort(arr,n);
	print(arr,n);
}