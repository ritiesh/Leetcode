bool cmp(pair<int,int>&a,pair<int,int>&b)
{
    if(a.second==b.second)
    {
        return a.first<b.first;
    }
    return a.second<b.second;
}


class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int>s;
        vector<pair<int,int>>p;
        // for(int i=0;i<arr.size();i++)
        // {
        //     p.push_back(make_pair(arr[i],0));
        // }
        for(auto x:arr)
        {
            int l=x;
            int count=0;
            while(x>0)
            {
                int rem=x%2;
                if(rem==1)
                {
                    count++;
                }
                x/=2;
            }
            p.push_back(make_pair(l,count));
            
        }
        
        for(auto x:p)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
        sort(p.begin(),p.end(),cmp);
        for(auto x:p)
        {
            s.push_back(x.first);
        }
        return s;
    }
};
