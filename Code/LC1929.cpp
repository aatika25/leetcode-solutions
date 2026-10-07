#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans=nums;
        for(int i:nums)
        {
            ans.push_back(i);
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
    Solution t;
    vector<int> ans=t.getConcatenation(nums);
    for(int i=0;i<2*n;i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}