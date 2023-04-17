class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int median;
         median=arr[(arr.size()-1)/2];
        vector<pair<int,int>>v;
        vector<int>v1,v2;
        for(int i=0;i<n;i++)
        {
            v.push_back({abs(arr[i]-median),arr[i]});
        }
        sort(v.begin(),v.end());
        for(auto x:v)
        {
            v1.push_back(x.second);
        }
        reverse(v1.begin(),v1.end());
        for(int i=0;i<k;i++)
        {
            v2.push_back(v1[i]);
        }
        return v2;
    }
};
