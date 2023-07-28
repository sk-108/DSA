#include<iostream>
using namespace std;

int index(int a[],int size,int target,int output[])
{
    if(size == 0)
    {
        return 0;
    }
    int ans = index(a,size-1,target,output);
    if(a[size-1] == target)
    {
        output[ans] = size-1;
        ans++;
    }
    return ans;
}

int main()
{
    int a[] = {5,5,6,7,8,6,5};
    int output[100];
    int s = index(a,7,5,output);
    for(int i=0;i<s;i++)
    {
        cout<<output[i]<<endl;
    }
}