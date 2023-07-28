#include<iostream>
#include<math.h>
using namespace std;

int sumOfNo(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else{
        int smallerSum = sumOfNo(n/10);
        return smallerSum + n%10;
    }
}


int main()
{
    int n;
    cin>>n;
    cout<<sumOfNo(n);
}