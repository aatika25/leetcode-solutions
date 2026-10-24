#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i]=nums[nums[i]];
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
    vector<int> ans;
    ans=s.buildArray(nums);
    cout << "output:\n";
    for(int i=0;i<n;i++)
    {
        cout << ans[i] << " ";
    }
}