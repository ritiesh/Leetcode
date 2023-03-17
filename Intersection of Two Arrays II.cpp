class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        map<int,int>mp1,mp2;
        for(auto x:nums1)
        {
            mp1[x]++;
        }
        for(auto x:nums2)
        {
            mp2[x]++;
        }
        for(auto x:mp1)
        {
            if(mp2[x.first])
            {
                int count=min(x.second,mp2[x.first]);
                while(count--)
                {
                    v.push_back(x.first);
                }
            }
        }
        return v;
        
    }
};
