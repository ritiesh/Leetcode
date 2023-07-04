#include <iostream>
#include<vector>

using namespace std;

int main()
{
   int n,m;
   vector<int>v;
   cin>>n>>m;
   int ans=0;
   
   for(int i=n;i<=m;i++)
   {
       int count=0;
       for(int k=1;k<=i/2;k++)
       {
           if(i%k==0)
           {
               count++;
           }
       }
       if(count==1)
       {
           v.push_back(i);
       }
   }
   for(int i=0;i<v.size();i++)
   {
       for(int j=i+1;j<v.size();j++)
       {
           if(abs(v[i]-v[j])==6)
           {
               ans++;
           }
       }
   }
   cout<<ans;

    return 0;
}
