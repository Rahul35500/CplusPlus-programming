#include <iostream>
#include <unordered_map>
using std::cout;
using std::unordered_map;
void FindPair(int arr[],int a,int sum);
int main()
{
    int arr[] = {8, 7, 2, 5, 3, 1};
    int sum=10;
    int a=sizeof(arr)/sizeof(arr[0]);
    FindPair(arr,a,sum);
}
void FindPair(int arr[],int a,int sum)
{
    unordered_map<int,int>maps;
    for(int i=0;i<a;i++)
    {
        if(maps.find(sum-arr[i])!=maps.end())
        {
            cout<<"Pair found at position "<<maps[sum-arr[i]]<<" and "<<i;
            exit(0);
        }
        else
        {
            maps[arr[i]]=i;
        }
    }
    cout<<"Pair are not at any position ";
}