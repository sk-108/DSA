#include<iostream>
using namespace std;

int count(int n)
{
    if(n/10 == 0)
    {
        if(n == 0)
        {
            return 1;
        }
        else return 0;
    }
    int noOfZeros = count(n/10);

    if(n%10 == 0)
    {
        noOfZeros +=1;
    }
    return noOfZeros;
}

int main()
{
    int n;
    cin>>n;
    cout<<count(n);
}