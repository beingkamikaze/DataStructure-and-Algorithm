#include<iostream>
using namespace std;

void bubblesort(int arr[],int n) //Time Complexity O(n2)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}
//Optimization
void bubblesort1(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool swapped=false;
        for(int k=0;k<n-1-i;k++)
        {
            if(arr[k]>arr[k+1])
            {
                swap(arr[k],arr[k+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        break;
    }
}
int main()
{
    int arr[]={10,6,4,15,1,18},n=6;
    bubblesort1(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
