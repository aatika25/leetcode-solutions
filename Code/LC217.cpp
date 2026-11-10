#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i:nums)
        {
            s.insert(i);
        }
        if(s.size()==nums.size())
        {
            return false;
        }
        return true;
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
    if(s.containsDuplicate(nums))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}