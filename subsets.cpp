Select tags
0/5
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v1;
        vector<int>v;
        for(int j=0;j<(1<<nums.size());j++)
        {
            vector<int>v;
            for(int i=0;i<nums.size();i++)
            {
                if(j&(1<<i))
                {
                    v.push_back(nums[i]);
                }
            }
            v1.push_back(v);
            
        }
        return v1;
