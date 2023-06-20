#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

int partition(int *a,int l,int h)
{
	int pivot=a[l];
	int i=l-1;
	int j=h+1;
	
	do
	{
		do{
			i++;
		}
		while(a[i]<pivot);
		
		do{
			j--;
		}
		while(a[j]>pivot);
		
		if(i<j)
		{
			swap(&a[i],&a[j]);
		}
	}
	while(i<j);
	
	return j;
}

void quicksort(int *a,int p,int r)
{
	if(p<r)
	{
		int q=partition(a,p,r);
		quicksort(a,p,q);
		quicksort(a,q+1,r);
	}
}

void print(int *arr, int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
	quicksort(arr,0,n);
	print(arr,n);
}