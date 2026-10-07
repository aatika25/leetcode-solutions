#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0, mx=INT_MIN;
        for(int i:nums)
        {
            if(i==1)
            {
                cnt=cnt+1;
            }
            mx=max(cnt,mx);
            if(i!=1)
            {
                cnt=0;
            }
        }
        return mx;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    Solution t;
    int ans=t.findMaxConsecutiveOnes(nums);
    cout << ans;
    return 0;
}