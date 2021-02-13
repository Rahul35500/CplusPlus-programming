#include<iostream>
using namespace std;
void sorted(int A[],int n);
int main()
{
     int A[] = { 0, 0, 1, 0, 1, 1, 0, 1, 0, 0 };
     int n=sizeof(A)/sizeof(A[0]);
     sorted(A,n);
       for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
void sorted(int A[],int n)
{
    int zeroes=0;
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==0)
        {
            zeroes++;
        }
    }
    while(zeroes--)
    {
        A[k++]=0;
    }
    while(k<n)
    {
        A[k++]=1;
    }

}