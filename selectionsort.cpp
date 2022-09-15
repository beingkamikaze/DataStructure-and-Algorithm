#include<iostream>
using namespace std;

void selectionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
            min_ind=j;
        }
        swap(arr[min_ind],arr[i]);
    }
}

int main()
{
    int arr[]={10,6,4,15,1,18};
    selectionSort(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}