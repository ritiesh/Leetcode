class Solution {
public:
    char repeatedCharacter(string s) {
        map<int,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]>1)
            {
                return s[i];
            }
        }
        return -1;
    }
};
