#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[0], b=nums[nums.size()-1];
        int ans=__gcd(a,b);
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
    cout << "gcd = " << s.findGCD(nums);
}