#include <iostream>

using namespace std;

int main()
{
    string s;
    string m;
    cin>>s;
    cin>>m;
    string ans;
    int i=0;
    int j=0;
    int count=0;
    while(i<s.size())
    {
        if(s[i]==m[j])
        {
            count++;
            // ans+=s[i];
            j++;
        }
        else{
            j=0;
            count=0;
        }
        if(count<=m.size())
        {
            ans+=s[i];
            i++;
        }
        if(count==m.size())
        {
            
            ans.erase(ans.end()-count,ans.end());
            j=0;
            count=0;
        }
        
    }
    cout<<ans;

    return 0;
}
