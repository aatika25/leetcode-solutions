#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size(), cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[j]-nums[i]==diff)
                {
                    for(int k=j+1;k<n;k++)
                    {
                        if(nums[k]-nums[j]==diff)
                        {
                            cnt++;
                        }
                    }
                }
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
    cout << "enter the elements:\n";
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    int diff;
    cout << "diff = ";
    cin >> diff;
    Solution s;
    cout << "ans = " << s.arithmeticTriplets(nums,diff);
}