#include<iostream>
using namespace std;
void Display(int arr[],int n);
void Rearrange_An_Array_With_Alternate_High_And_Low_Elements(int arr[],int n);
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    Rearrange_An_Array_With_Alternate_High_And_Low_Elements(arr,n);
    Display(arr,n);
}
void Rearrange_An_Array_With_Alternate_High_And_Low_Elements(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+2<n)
        {
            int temp;
            temp=arr[i+1];
            arr[i+1]=arr[i+2];
            arr[i+2]=temp;
        }
    }
}
void Display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}