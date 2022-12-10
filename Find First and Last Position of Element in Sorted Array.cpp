class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        /*if(nums.size()<2)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==target)
                {return {i,i};}
                
            }
            return {-1,-1};
            
        }*/
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                for(int j=nums.size()-1;j>i;j--)
                {
                    if(nums[j]==target)
                    {
                        return {i,j};
                    }
                }
                return {i,i};
            }
            
        }
        return{-1,-1};
    }
};
