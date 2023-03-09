class Solution {
    
public:
    int binarysearch(int l,int r,vector<int>&nums,int target)
    {
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                r=mid-1;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int result=binarysearch(l,r,nums,target);
        return result;
    }
};
