#include<iostream>
using namespace std;

// bool check(int a[],int size,int x)
// {
//     if(size == 0)
//     {
//         return false;
//     }
//     if(a[0] == x)
//     {
//         return true;
//     }
//     return check(a+1,size-1,x);
// }

// bool check(int a[],int size,int x)
// {
//     if(size == 0)
//     {
//         return false;
//     }
//     if(a[size-1] == x)
//     {
//         return true;
//     }
//     return check(a,size-1,x);
// }

bool check(int a[],int st,int end,int x)
{
    if(st > end)
    {
        return false;
    }
    if(st == end)
    {
        if(a[st] == x)
        {
            return true;
        }
        else return false;
    }
    else{
        int mid = (st+end)/2;
        bool b1 = check(a,st,mid,x);
        bool b2 = check(a,mid+1,end,x);
        if(b1 || b2)return true;
        else return false;
    }
}

int main()
{
    int a[] = {1,2,3,4,5};
    if(check(a,0,4,9))cout<<"Present"<<endl;
    else cout<<"not present"<<endl;
}