public:
    int maximumValue(vector<string>& strs) {
        int ans=0;
        int len=0;
        int n=strs.size();
        for(auto x:strs)
        {
            int len=x.size(); int c=0;
            for(auto i:x)
            {
                if(i>='0' && i<='9')
                c++;
            }
            if(c==len) 
            len=stoi(x);
            ans=max(ans,len);
        }
        return ans;
    }
};
