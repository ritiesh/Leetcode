#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<2;
    }
    else
    {
    if(n==2||n==3)
    {
        cout<<1;
    }
    else{
        if(n%3==0)
        {
            cout<<n/3;
        }
        else
        {
            cout<<n/3 + 1;
        }
    }
    }
    return 0;
    
}
