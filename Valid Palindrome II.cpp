class Solution {
public:
    bool ispalindrome(int i,string s,int j)
    {
        while(i<j)
        {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        else
        return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                return ispalindrome(i,s,j-1)||ispalindrome(i+1,s,j);
            }
        }
        return true;
    }
};
