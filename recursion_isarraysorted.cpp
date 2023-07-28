#include<iostream>
using namespace std;
bool is_sorted2(int a[],int size)
{
    if(size == 0 || size == 1)
    {
        return true;
    }
    bool isSmallerSorted = is_sorted2(a+1,size-1);
    if(!isSmallerSorted)
    {
        return false;
    }
    if(a[0] > a[1])
    {
        return false;
    }
    else return true;
}

bool is_sorted(int a[],int size)
{
    if(size == 0 || size == 1)
    {
        return true;
    }
    if(a[0] > a[1])
    {
        return false;
    }
    bool isSmallerSorted = is_sorted(a+1 , size - 1);
    return isSmallerSorted;
}

int main()
{
    int a[] = {1,2,3,4,5};
    if(is_sorted2(a,5))cout<<"sorted"<<endl;
    else cout<<"not sorted"<<endl;
}