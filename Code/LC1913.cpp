#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=(nums[nums.size()-1]*nums[nums.size()-2])-(nums[0]*nums[1]);
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
    Solution s;
    cout << s.maxProductDifference(nums);
}