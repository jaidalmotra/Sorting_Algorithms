#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void bubblesort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);	
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
	bubblesort(arr,n);
	print(arr,n);
}