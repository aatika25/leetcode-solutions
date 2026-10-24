#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt=0;
        for(int i:nums)
        {
            if(i<k)
            {
                cnt++;
            }
        }
        return cnt;
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
    int k;
    cout << "k = ";
    cin >> k;
    Solution s;
    cout << s.minOperations(nums,k);
}