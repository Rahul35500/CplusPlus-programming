#include<iostream>
#include<unordered_map>
using namespace std;
using std::unordered_map;
bool duplicate(int arr[],int n);

//Find duplicate element in a limited range array
int main()
{
    int arr[] = { 1, 2, 3,2,4,3 };
    int n=sizeof(arr)/sizeof(arr[0]);
    bool result=duplicate(arr,n);
    if(result==true)
    {}
    else
    {
        cout<<"Duplicate values are not present in this list:"; 
    }

}
bool duplicate(int arr[],int n)
{
    unordered_map<int,int>maps;             
    for(int i=0;i<n;i++)
    {
        if(maps.find(arr[i])!=maps.end())
        {
            cout<<"duplicate value are :"<<arr[i]<<endl;
           // return;
           return true;
        }
        else
        {
            maps[arr[i]]=i;
        }
    }
   // cout<<"Duplicate values are not present in this list:";
    return false;
}