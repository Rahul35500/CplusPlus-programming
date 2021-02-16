#include<iostream>
using namespace std;
void maximum_pair_product(int arr[],int n);
#include<limits.h>
int main()
{
      int arr[] = {-10, -1, 8, 5, 5, 6, 7, -2,10};
      int n=sizeof(arr)/sizeof(arr[0]);
      maximum_pair_product(arr,n);
}
void maximum_pair_product(int arr[],int n)
{
    int maximum1=arr[0],maximum2=INT_MIN;
    int minimum1=arr[0],minimum2=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>maximum1)
        {
            maximum2=maximum1;
            maximum1=arr[i];
        }
        else if(arr[i]>maximum2)
        {
            maximum2=arr[i];
        }
        if(arr[i]<minimum1)
        {
            minimum2=minimum1;
            minimum1=arr[i];
        }
        else if(arr[i]<minimum2)
        {
            minimum2=arr[i];
        }
    }
    if(maximum1*maximum2>minimum1*minimum2)
    {
        cout<<"pair of maximum product {"<<maximum1<<","<<maximum2<<"}"<<endl;

    }
    else
    {
          cout<<"pair of maximum product {"<<minimum1<<","<<minimum2<<"}"<<endl;
    }
}


