class Solution {
public:
    int totalMoney(int n) {
        int k=n/7;
        int r=n%7;
        int ans=0;
        int ans1=0;
        int ans2=0;
        int i;
        if(k==0)
        {
            for(int i=0;i<n;i++)
            {
                ans=ans+(i+1);
            }
            return ans;
        }
        else
        {
            for( i=0;i<k;i++)
            {
                for(int j=0;j<7;j++)
                {
                    ans1+=j+(i+1);
                }
            }
            for(int l=0;l<r;l++)
            {
                ans2+=(l+(i+1));
            }
        }
        return ans1+ans2;
    }
};
