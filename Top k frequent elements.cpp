class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        map<int,int>mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        vector<pair<int,int>>p;
        for(auto x:mp)
        {
            p.push_back(make_pair(x.second,x.first));
        }
        sort(p.begin(),p.end());
        reverse(p.begin(),p.end());
        for(int i=0;i<k;i++)
        {
            v.push_back(p[i].second);
        }
        return v;
    }
};
