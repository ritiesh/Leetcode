class Solution {
  public:
    int countX(int L, int R, int X) {
        int count=0;
        for(int i=L+1;i<=R-1;i++)
        {
            int K=i;
            while(K>0)
            {
                int rem=K%10;
                if(rem==X)count++;
                K=K/10;
            }
        }
        return count;
    }
};
