class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string s;
        for(int i=0;i<words.size();i++)
        {
            for(auto x:words[i])
            {
                s+=x;
            }
            reverse(s.begin(),s.end());
            if(s==words[i])
            return s;
            else
            s.clear();
        }
        return "";
    }
};
