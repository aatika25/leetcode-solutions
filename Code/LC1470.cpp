#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int i=0,j=n;i<n && j<2*n;i++,j++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
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
    vector<int> nums(2*n);
    for(int i=0;i<2*n;i++)
    {
        cin >> nums[i];
    }
    Solution t;
    vector<int> ans=t.shuffle(nums, n);
    for(int i=0;i<2*n;i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}