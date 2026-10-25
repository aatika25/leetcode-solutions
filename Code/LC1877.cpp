#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=INT_MIN;
        for(int i=0;i<n/2;i++)
        {
            int s=nums[i]+nums[n-i-1];
            ans=max(ans,s);
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
    cout << s.minPairSum(nums);
}