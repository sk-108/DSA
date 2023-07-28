#include<iostream>
using namespace std;

int index(int a[],int size,int target)
{
    if(size == 0)
    {
        return -1;
    }
    int idx = index(a+1,size-1,target);
    if(idx != -1)
    {
        return idx+1;
    }
    else{
        if(a[0] == target)
        {
            return 0;
        }
        return -1;
    }
}

int main()
{
    int a[] = {5,5,6,7,8,6,5};
    int output[100];
    int lastindex = index(a,7,6);
    cout<<lastindex<<endl;
}