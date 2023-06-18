#include<iostream>
using namespace std;

void merge(int *arr,int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;

    int left[n1];
    int right[n2];

    for (int i=0;i<n1;i++)
    {
        left[i]=arr[p+i];
    }

    for (int j=0;j<n2;j++)
    {
        right[j]=arr[q+1+j];
    }

    int i=0,j=0,k=p;

    while(i<n1&&j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else
        {
            arr[k]=right[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        arr[k]=left[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
}

void mergeSort(int *arr,int p,int r)
{
    if (p<r)
    {
        int q=(p+r)/2;
        mergeSort(arr,p,q);
        mergeSort(arr,q+1,r);
        merge(arr,p,q,r);
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
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of the array: "<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    mergeSort(arr,0,n-1);

    cout<<"Sorted array: ";
    print(arr,n);
	return 0;
}
