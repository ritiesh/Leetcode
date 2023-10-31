class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>s1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            s1.push(i);
        }
        else if(s[i]==')' && !s1.empty() && s[s1.top()]=='(' )
        {
            s1.pop();
        }
        else if(s[i]==')')
        {
            s1.push(i);
        }
    }
    while(s1.size())
    {
        s[s1.top()]='$';
        s1.pop();
    }
    string k;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='$')
        {
            k+=s[i];
        }
    }
    return k;
    }
};
