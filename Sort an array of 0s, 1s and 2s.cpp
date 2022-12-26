class Solution
{
    public:
    void sort012(int a[], int n)
    {
        //vector<int>v;
        int zc=0;
        int oc=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            zc++;
            if(a[i]==1)
            oc++;
        }
        for(int i=0;i<zc;i++)
        {
            a[i]=0;
        }
        for(int i=zc;i<zc+oc;i++)
        {
            a[i]=1;
        }
        for(int i=zc+oc;i<n;i++)
        {
            a[i]=2;
        }
    }
    
};
