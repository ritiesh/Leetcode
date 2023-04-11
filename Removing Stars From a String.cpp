class Solution {
public:
    string removeStars(string s) {
        int n=s.size();
        string ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='*')
            {
                ans.push_back(s[i]);
            }
            else if(s[i]=='*' && ans[ans.size()-1]!='*')
            {
                ans.pop_back();
            }
        }
        return ans;
    }
};
