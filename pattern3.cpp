#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int odd = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        int count = 1;
        if(i != 1)
        {
            odd += 2;
        }
        int flag = 0;
        for(int j=1;j<=odd;j++)
        {
            if(count <=i && flag == 0)
            {
                cout<<count<<" ";
                count++;
            }
            else{
                if(flag == 0)
                {
                    flag = 1;
                    count--;
                }
                count--;
                cout<<count<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}