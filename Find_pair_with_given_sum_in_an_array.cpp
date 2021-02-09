#include<iostream>
using namespace std;
int main()
{
    int array[]={8,7,2,5,3,1};
    int SumVariable=10;
    int pair[10];
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            int result=array[i]+array[j];
            if(SumVariable==result)
            {
                cout<<"Pair found index "<<i<<" and "<<j<<endl;
                exit(0);
            }
            
        }
    }
                cout<<"pair are not found at any postion";
}