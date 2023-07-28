#include<iostream>
using namespace std;

int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }
    int smalloutput = fact(n-1);
    int output = n * smalloutput;
    return output;
}
int main()
{
    cout<<fact(5)<<endl;
    return 0;
}