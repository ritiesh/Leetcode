class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        string k="";
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        vector<pair<int,char>>v;
        for(auto i:m)
        {
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end());
        /*for(auto i:v)
            cout<<i.first<<" "<<i.second<<endl;*/
        for(auto u:v)
        {
            while(u.first!=0)
            {
                k+=u.second;
                u.first--;
            }
            
        }
        reverse(k.begin(),k.end());
        return k;
        
    }
};
