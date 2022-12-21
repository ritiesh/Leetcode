class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum =0;
        int maxt=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            maxt=max(sum,maxt);
            if(sum<0)
            {
                sum=0;
            }
           
        }
        return maxt;
    }
};
