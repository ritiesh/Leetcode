//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    int n=s.size();
		    vector<string>v;
		    for(int j=0;j<(1<<n);j++)
		    {
		        string sub;
		        int flag=0;
		        for(int i=0;i<s.size();i++)
		        {
		            
		            if(j&(1<<i))
		            {
		                flag=1;
		                sub+=s[i];
		            }
		        }
		        if(flag)
		        v.push_back(sub);
		    }
		    sort(v.begin(),v.end());
		    return v;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends
