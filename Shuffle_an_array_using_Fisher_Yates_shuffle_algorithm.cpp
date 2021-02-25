#include<iostream>
#include<time.h>
void ShuffleAlgorithms(int A[],int n);
void swap(int A[],int i,int j);
void Display(int A[],int n);
using namespace std;
int main()
{
    int A[] = { 1, 2,3, 4, 5, 6 };
    int n=sizeof(A)/sizeof(A[0]);
    srand(time(0));
    ShuffleAlgorithms(A,n);
    Display(A,n);
}
void ShuffleAlgorithms(int A[],int n)
{
    int Randon_value;
    for(int i=n-1;i>0;i--)
    {
        Randon_value=rand()%(i+1);
        swap(A,i,Randon_value);
    }
}
void swap(int A[],int i,int j)
{
    int temp;
    temp=A[j];
    A[j]=A[i];
    A[i]=temp;
}
void Display(int A[],int n)
{
    cout<<"shuffle value are : ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}