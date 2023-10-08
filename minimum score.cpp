#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=3;
    int k=1;
    int arr[n];
    int score=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int first=0,last=n-1;
    for(int i=0;i<k;i++)
    {
        score+=arr[first++]/arr[last--];
    }
    while(first<=last)
    {
        score+=arr[first];
        first++;
    }
    cout<<score;
    return 0;
}
