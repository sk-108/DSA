#include<iostream>
using namespace std;


// int sum(int a[],int size)
// {
//     if(size == 1)
//     {
//         return a[0];
//     }
//     int smallersum = sum(a+1,size-1);
//     return a[0] + smallersum;
// }

// int sum(int a[],int size)
// {
//     if(size == 1)
//     {
//         return a[0];
//     }
//     int smallersum = sum(a,size-1);
//     return a[size-1] + smallersum;
// }

int sum(int a[],int st,int end)
{
    if(st > end)
    {
        return 0;
    }
    if(st == end)
    {
        return a[st];
    }
    else{
        int mid = (st + end)/2;
        return sum(a,st,mid) + sum(a,mid+1,end);
    }
}
int main()
{
    int a[] = {1,2,3,4,5};
    cout<<sum(a,0,4);
}