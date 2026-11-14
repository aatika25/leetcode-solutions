#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        int ans=INT_MAX;
        vector<int> pr(n,0);
        pr[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            pr[i]=nums[i]+pr[i-1];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>=i;j--)
            {
                if((j-i+1)>=l && (j-i+1)<=r)
                {
                    int s;
                    if(i==0)
                    {
                        s=pr[j];
                    }
                    else
                    {
                        s=pr[j]-pr[i-1];
                    }
                    if(s>0)
                    {
                        ans=min(s,ans);
                    }
                }
            }
        }
        if(ans==INT_MAX)
        {
            return -1;
        }
        return ans;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    cout << "enter the elements:\n";
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    int l, r;
    cout << "l = ";
    cin >> l;
    cout << "r = ";
    cin >> r;
    Solution s;
    cout << "output: ";
    cout << s.minimumSumSubarray(nums,l,r);
}