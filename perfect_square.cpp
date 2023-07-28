#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag = 0;
    for(int i=1;i<=n;i++)
    {
        if(i*i == n)
        {
            cout<<"it is a perfect square "<<endl;
            flag = 1;
        }
    }
    if(flag == 0)
        cout<<"not a perfect square "<<endl;
    return 0;
}