#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> cp=nums;
        sort(cp.begin(),cp.end());
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            auto it=find(cp.begin(),cp.end(),nums[i]);
            ans[i]=distance(cp.begin(),it);
        }
        return ans;
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
    Solution s;
    vector<int> ans=s.smallerNumbersThanCurrent(nums);
    for(int i=0;i<n;i++)
    {
        cout << ans[i] << " ";
    }
}