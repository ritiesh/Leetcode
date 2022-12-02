class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>v;
        vector<int>l;
        map<char,int>mp,np;
        string o=""; string k= "";
        if(word1.length() != word2.length())
        {
            return 0;
        }
        else{
            for(int i=0;i<word1.size();i++)
            {
                mp[word1[i]]++;
            }
            for(int i=0;i<word2.size();i++)
            {
                np[word2[i]]++;
            }
            for(auto i:mp)
            {
                o+=i.first;
                v.push_back(i.second);
            }
            for(auto i: np)
            {
                k+=i.first;
                l.push_back(i.second);
            }
            if(k!=o)
            {
                return 0;
            }
            sort(v.begin(),v.end());
            sort(l.begin(),l.end());
            for(int i=0;i<v.size();i++)
            {
                if(v[i]!=l[i])
                    return 0;
            }
            return 1;
           
        }
        
    }
};
