#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int d=0, n=nums.size(), mn=nums[0];
        for(int i=0;i<n;i++)
        {
            d=d+(nums[i]-mn);
        }
        return d;
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
    cout << "answer = " << s.minMoves(nums);
}