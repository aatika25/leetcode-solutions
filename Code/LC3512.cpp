#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int s=0;
        for(int i:nums)
        {
            s=s+i;
        }
        int cnt=0;
        while(s>0)
        {
            if(s%k==0)
            {
                return cnt;
            }
            cnt++;
            s--;
        }
        return cnt;
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
    int k;
    cout << "k = ";
    cin >> k;
    Solution s;
    cout << s.minOperations(nums,k);
}