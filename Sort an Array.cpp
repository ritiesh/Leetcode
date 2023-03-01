class Solution {
public:
    void merger(vector<int>&nums,int start,int end,int mid)
    {
        int ls=mid-start+1;
        int rs=end-mid;
        int la[ls],ra[rs];
        for(int i=0;i<ls;i++)
        {
            la[i]=nums[i+start];
        }
        for(int j=0;j<rs;j++)
        {
            ra[j]=nums[mid+1+j];
        }
        int i=0,j=0,k=start;
        while(i<ls && j<rs)
        {
            if(la[i]<ra[j])nums[k++]=la[i++];
            else
            nums[k++]=ra[j++];
        }
        while(i<ls)
        nums[k++]=la[i++];
        while(j<rs)
        nums[k++]=ra[j++];
    }
    void merge(vector<int>& nums,int start,int end)
    {
        if(start<end)
        {
            int mid=(start+end)/2;
            merge(nums,start,mid);
            merge(nums,mid+1,end);
            merger(nums,start,end,mid);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        merge(nums,start,end);
        return nums;
    }
};
