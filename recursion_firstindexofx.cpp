#include<iostream>
using namespace std;

int index(int a[],int size,int target)
{
    if(size == 0)
    {
        return -1;
    }
    if(a[0] == target)
    {
        return 0;
    }
    int idx = index(a+1,size-1,target);
    if(idx == -1)return -1;
    else{
        return idx + 1;
    }
}

int main()
{
    int a[] = {5,5,6,7,8,6,5};
    cout<<index(a,7,8)<<endl;
}