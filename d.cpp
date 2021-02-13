#include<iostream>
using namespace std;
#include<unordered_map>
int main()
{
    int arr[]= { 5, 6, -5, 5, 3, 5, 3, -2, 0 };
    int n=sizeof(arr)/sizeof(arr[0]);
    
    maximum_length_subarray(arr,n);
}

void maximum_length_subarray(int arr[],int n)
{
    int sum=8;
    std::unordered_map<int,int>maps;
    for(int i=0;i<n;i++)
    {
        if(maps.find(sum-arr[i])!=maps.end())
        {

        }
        else
        {
            maps[arr[i]]=
        }
    }

}