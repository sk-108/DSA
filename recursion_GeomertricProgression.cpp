#include<iostream>
#include<math.h>
using namespace std;

double gsum(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else{
        double  ans = (gsum(n-1));
        return ans + 1.0/pow(2,n);
        
    }
    
}

int main()
{
    int n;
    cin>>n;
    cout<<gsum(n);
}