#include<iostream>
using namespace std;

int count(int n)
{
    if(n < 10)
    {
        return 1;
    }
    int smalloutput = count(n/10);
    return smalloutput + 1;
}
int main()
{
    int n;
    cin>>n;
    cout<<count(n);
    return 0;
}