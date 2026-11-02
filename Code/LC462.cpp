#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int m=nums[n/2], cnt=0;
        for(int i=0;i<n;i++)
        {
            cnt=cnt+abs(m-nums[i]);
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
    Solution s;
    cout << "answer = " << s.minMoves2(nums);
}