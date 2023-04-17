class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v;
        int n=candies.size();
        int maxi=0;
        for(int i=0;i<n;i++)
        {
              if(candies[i]>=maxi)
              {
                  maxi=candies[i];
              }
        }
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=maxi)
            v.push_back(true);
            else
            v.push_back(false);
        }
        return v;
    }
};
