#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans;
        for(int i:nums)
        {
            ans.push_back(i);
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            ans.push_back(nums[i]);
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
    cout << "enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    Solution s;
    vector<int> ans=s.concatWithReverse(nums);
    for(int i=0;i<2*n;i++)
    {
        cout << ans[i] << " ";
    }
}