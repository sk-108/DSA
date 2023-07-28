#include<iostream>
#include<math.h>
using namespace std;


bool check(string s,int st,int end)
{
    if(st >= end)
    {
        return true;
    }
    if(s[st] != s[end])
    {
        return false;
    }
    return check(s,st+1,end-1);
}

int main()
{
    string s;
    cin>>s;
    if(check(s,0,s.size()-1))
    {
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
}