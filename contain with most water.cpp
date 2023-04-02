class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int mini=0;
        int sum=0;
        int maxi=0;
        int i=0,j=n-1;
        while(i<j)
        {
            mini=min(height[j],height[i]);
            sum=mini*(j-i);
            maxi=max(sum,maxi);
            if(height[i]<=height[j])
            i++;
            else
            j--;
        }
        return maxi;
    }
};
