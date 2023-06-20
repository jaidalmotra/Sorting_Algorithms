#include<iostream>
using namespace std;

void countsort(int *arr,int size)
{
	int max=arr[0];
	for(int i=0;i<size;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	
	int count[max+1]={0};

	
	for(int i=0;i<size;i++)
	{
		count[arr[i]]++; 
	}
	
	for(int i=0,j=0;i<=max;i++)
	{
		while(count[i]>0)
		{
			arr[j]=i;
			j++;
			count[i]--;
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
	cout<<"enter size of the array "<<endl;
	cin>>n;
	int arr[n];
	for (i=0;i<n;i++)
	{
		cout<<"enter a number "<<endl;
		cin>>arr[i];
	}
	countsort(arr,n);
	print(arr,n);
}