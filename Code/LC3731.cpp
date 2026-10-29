#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int j=0;
        for(int i=nums[0];i<=nums[nums.size()-1];i++)
        {
            if(i==nums[j])
            {
                j++;
            }
            else
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
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    Solution s;
    vector<int> ans=s.findMissingElements(nums);
    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i] << " ";
    }
}