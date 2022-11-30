class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int count=0;
        vector<int>v;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        for(auto m: nums)
        {
            if(m!=0)
                v.push_back(m);
            else
                count++;
        }
        while(count--)
        {
            v.push_back(0);
        }
        return v;
       
    }
};
