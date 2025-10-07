class Solution {
public:
    #define ll long long int
    long long maximumTripletValue(vector<int>& nums) {

         int n=nums.size();


        vector<int>suff(n);

        suff[n-2]=nums[n-1];

        suff[n-1]=-1;

        for(int i=n-3;i>=0;i--)
        {
            suff[i]=max(nums[i+1],suff[i+1]);
        }

        int left=nums[0];

        ll res=0;

        for(int i=1;i<n-1;i++)
        {
            ll val=(left-nums[i])*1LL*suff[i];

            res=max(res,val);

            left=max(left,nums[i]);


        }

        return res;
        
    }
};
