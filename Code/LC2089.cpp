#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                ans.push_back(i);
            }
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
    int target;
    cout << "target = ";
    cin >> target;
    Solution s;
    vector<int> ans=s.targetIndices(nums,target);
    cout << "target indices in sorted array:\n";
    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i] << " ";
    }
}