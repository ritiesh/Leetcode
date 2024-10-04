class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        if(n==2)return skill[0]*skill[1];
        sort(skill.begin(),skill.end());
        int i=0;
        int j=n-1;
        int sum=skill[i]+skill[j];
        long long k=0;
        while(i<j)
        {
            if((skill[i]+skill[j])==sum)
            {
                k+=(skill[i]*skill[j]);
            }
            else
            {
                k=0;
                break;
            }
            i++;
            j--;
        }
        if(k==0)return -1;
        return k;
    }
};
