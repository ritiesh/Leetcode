class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int c=0;
        while(num>0)
        {
            int rem=num%10;
            num=num/10;
            if(n%rem==0)
            c++;
        }
        return c;
    }
};
