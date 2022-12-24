class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int st=0;
        int en=num.size()-1;
        while(st<en){
           if(num[st]+num[en]>target)
           en-=1;
           else if(num[st]+num[en]<target)
           st+=1;
           else
           return {st+1,en+1};
        }
        return {};
    }

};
