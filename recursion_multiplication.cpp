#include<iostream>
#include<math.h>
using namespace std;

int mulOfNo(int m,int n)
{
    if(m == 0 || n == 0)
    {
        return 0;
    }
    else{
        int smallermul = mulOfNo(m-1,n);
        return smallermul + n;
    }
}


int main()
{
    int m,n;
    cin>>m>>n;
    cout<<mulOfNo(m,n);
}