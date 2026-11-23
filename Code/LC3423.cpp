#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        int d=abs(nums[0]-nums[n-1]);
        for(int i=0;i<n-1;i++)
        {
            int p=abs(nums[i]-nums[i+1]);
            d=max(d,p);
        }
        return d;
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
    cout << "ans = " << s.maxAdjacentDistance(nums);
}